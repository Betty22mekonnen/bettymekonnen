/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:30:20 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/17 19:00:56 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	free_ar(char **s, size_t i)
{
	while (i--)
		free(s[i]);
	free(s);
}

static size_t	string_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (!*s)
			break ;
		++count;
		while (*s && *s != c)
			++s;
	}
	return (count);
}

static char	**fill_string(char **arr, char const *s, char c, size_t count)
{
	size_t		i;
	size_t		len;
	char const	*start;

	i = 0;
	while (i < count)
	{
		while (*s == c)
			++s;
		start = s;
		while (*s && *s != c)
			++s;
		len = s - start;
		arr[i] = malloc((len + 1) * sizeof(char));
		if (!arr[i])
		{
			free_ar(arr, i);
			return (NULL);
		}
		ft_memcpy(arr[i], start, len);
		arr[i][len] = '\0';
		++i;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**pp;

	if (!s)
		return (NULL);
	count = string_count(s, c);
	pp = (char **)malloc((count + 1) * (sizeof(char *)));
	if (!pp)
		return (NULL);
	pp = fill_string(pp, s, c, count);
	return (pp);
}
