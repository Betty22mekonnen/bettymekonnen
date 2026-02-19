/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:38:15 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/07 21:26:15 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int     main(void)
{
        int     i;
        char    str[] = "Betty";
        char    *result = malloc(strlen(str) + 1);

        i = 0;
        while (str[i])
        {
                result[i] = (char) ft_tolower((unsigned char)str[i]);
                i++;
        }
        result[i] = '\0';
        printf("to lower case: %s ", result);
        free(result);
        return (0);
}
*/