/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:54:33 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:14:01 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, int *cursor)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[*cursor] == c)
		(*cursor)++;
	while (s[*cursor + len] && s[*cursor + len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[*cursor + i];
		i++;
	}
	word[i] = '\0';
	*cursor += len;
	return (word);
}

void	free_matrix(char **argv)
{
	int	i;

	i = 0;
	if (!argv)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	int		words;
	int		i;
	int		cursor;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split_arr = malloc(sizeof(char *) * (words + 1));
	if (!split_arr)
		return (NULL);
	i = 0;
	cursor = 0;
	while (i < words)
	{
		split_arr[i] = get_next_word(s, c, &cursor);
		if (!split_arr[i])
		{
			free_matrix(split_arr);
			return (NULL);
		}
		i++;
	}
	split_arr[i] = NULL;
	return (split_arr);
}
