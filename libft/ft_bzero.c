/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:47:06 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/01 19:17:39 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *) s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char str[20] = "hello world";
	ft_bzero(str+3, 7);
	printf("%s\n", str);
	bzero(str+2, 7);
	printf("after : %s", str);
	return (0);
}
*/
