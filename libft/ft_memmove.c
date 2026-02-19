/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 21:49:33 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/20 16:30:50 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	size_t			i;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (n-- > 0)
		{
			temp_dst[n] = temp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (temp_dst);
}
/*
int	main(void) 
{ 
	char	csrc[100] = "Geeksfor"; 
	char	*str = ft_memmove(csrc+5, csrc, ft_strlen(csrc)+1); 
	printf("bulit in memmove : %s\n", csrc);
	printf("s\n", (unsigned char *)str);	
	return 0; 
}
*/
