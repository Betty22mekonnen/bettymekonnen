/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:45:57 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/07 17:41:53 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		line_num = 1;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	printf("File opened successfully (fd = %d)\n", fd);
	// printf("File opened successfully (fd = %s)\n", get_next_line(fd));
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line %d: %s\n", line_num++, line);
		free(line);
	}
	close(fd);
	return (0);
}
