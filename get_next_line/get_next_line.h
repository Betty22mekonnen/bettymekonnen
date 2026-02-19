/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:06:02 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/07 17:50:48 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	42
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);

#endif
