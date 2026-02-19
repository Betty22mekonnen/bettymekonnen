/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:41:30 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/15 17:40:58 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	while (i < nmemb * size)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
/*
int main()
{
    int *ptr = (int *)ft_calloc(5, sizeof(int));

    int i = 0;
    while (ptr[i] <= 4)
    {
        printf ("%d", ptr[i]);
        i++;
    }
    return (0);
} 
*/
