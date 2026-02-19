/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 02:49:29 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/15 18:49:58 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = 0;
	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *) big);
	while (big[i] && len >= little_len)
	{
		if (!ft_strncmp(big + i, little, little_len))
			return ((char *)(big + i));
		i++;
		len--;
	}
	return (NULL);
}
/*
int		main(void)
{
	char *big = "fun hour of a day";
	char *small = "hour of";
	char	*result = ft_strnstr(big, small, 17);
	char	*result2 = strnstr(big, small, 17);
	printf("%s\n", result);
	printf("%s\n", result2);
	return (0);
}
*/
