/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:53:05 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/08 19:24:58 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "abeba";
	char str2[] = "abebe";
	char 	result;

	result = ft_memcmp(str1, str2, 5);
	printf("the difference of this two strings are : %d", result);
	return (0);
}
*/