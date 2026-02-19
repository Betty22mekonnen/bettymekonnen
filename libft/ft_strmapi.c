/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:13:29 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/14 16:52:44 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		len;
	int		i;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		temp = (char *)malloc(sizeof(char) * len + 1);
		while (s[i])
		{
			temp[i] = f(i, s[i]);
			i++;
		}
		temp[i] = '\0';
		return (temp);
	}
	return (NULL);
}
