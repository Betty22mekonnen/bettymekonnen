/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 22:08:10 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/16 17:58:01 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len2 = 0;
	len1 = ft_strlen(src);
	while (dest[len2] != '\0' && len2 < size)
		len2++;
	if (len2 >= size)
		return (len1 + len2);
	while ((len2 + i + 1) < size && src[i] != '\0')
	{
		dest[len2 + i] = src[i];
		i++;
	}
	dest[len2 + i] = '\0';
	return (len2 + len1);
}
/*
int	main(void)
{
	char *s1 = "world";
	char s2[20] = "hello";
	printf ("the new created string is : %zu ", ft_strlcat(s2, s1, 20));
	//printf ("the new created string is : %s ", strlcat(s2, s1, 5));
	return (0);
}
*/
