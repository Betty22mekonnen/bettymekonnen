/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:18:47 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/15 18:09:38 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;

	if (src == (void *)0 && dst == (void *)0)
		return (dst);
	temp_src = (unsigned char *) src;
	temp_dst = (unsigned char *) dst;
	while (n > 0)
	{
		*temp_dst = *temp_src;
		temp_src++;
		temp_dst++;
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	char    csrc[100] = "Geeksfor"; 
        char	*str = ft_memcpy(csrc+5, csrc, ft_strlen(csrc)+1); 
        printf("bulit in memcpy : %s\n", csrc);
        printf("%s\n", (unsigned char *)str);  
        return 0;
}
*/
