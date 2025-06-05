/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:26:19 by bmekonne          #+#    #+#             */
/*   Updated: 2025/06/01 18:30:48 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{

        i = 0;
        while (src[i] && i < n)
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
	{
		dest[i ++] = '\0';
	}
        return (dest);
}
