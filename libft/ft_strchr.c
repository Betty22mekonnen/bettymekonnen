/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:47:09 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/22 15:40:59 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char) c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "betty";
	char	*result;
	
	result = ft_strchr(str, '\0');
	printf("yeah, I found the letter :%s ", result);
	return (0);
}
