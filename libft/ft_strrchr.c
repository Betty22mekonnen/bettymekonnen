/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 00:05:04 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/15 18:51:02 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		else
			i--;
	}
	return (NULL);
}
/*
int     main(void)
{
        char    *str = "betty,loves,pasta";
        char    *result;

        result = ft_strrchr(str, ',');
        printf("yeah, I found comma : %s ", result);
        return (0);
}
*/
