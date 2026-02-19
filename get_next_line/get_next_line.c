/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:16:06 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/22 14:43:21 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check_new_line(char *src)
{
	int	i;

	i = 0;
	if (!src)
		return (0);
	while (src[i])
	{
		if (src[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static char	*read_then_stash(int fd, char *stash)
{
	ssize_t		i;
	char		*buffer;
	char		*temp;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	i = 1;
	while (!check_new_line(stash) && i > 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i < 0)
			return (free(buffer), NULL);
		buffer[i] = '\0';
		if (!stash)
			temp = ft_strdup(buffer);
		else
		{
			temp = ft_strjoin(stash, buffer);
			free(stash);
		}
		stash = temp;
	}
	free(buffer);
	return (stash);
}

char	*get_contents_before(char *src)
{
	char	*stash;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!src || !src[0])
		return (NULL);
	while (src[i] && src[i] != '\n')
		i++;
	if (src[i] == '\n')
		i++;
	stash = malloc(sizeof(char) * (i + 1));
	if (!stash)
		return (NULL);
	while (j < i)
	{
		stash[j] = src[j];
		j++;
	}
	stash[j] = '\0';
	return (stash);
}

char	*get_contents_after(char *src)
{
	char	*leftover;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	while (*src && *src != '\n')
		src++;
	if (*src == '\n')
		src++;
	while (src[i])
		i++;
	if (i == 0)
		return (NULL);
	leftover = malloc(sizeof(char) * (i + 1));
	if (!leftover)
		return (NULL);
	i = 0;
	while (src[i])
	{
		leftover[i] = src[i];
		i++;
	}
	leftover[i] = '\0';
	return (leftover);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_then_stash(fd, stash);
	if (!stash || *stash == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	line = get_contents_before(stash);
	temp = get_contents_after(stash);
	free(stash);
	stash = temp;
	return (line);
}
