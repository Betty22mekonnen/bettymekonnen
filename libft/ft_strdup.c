/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 22:41:14 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/15 18:34:43 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;

	len = 0;
	while (src[len])
		len++;
	result = malloc(sizeof(char ) * (len + 1));
	if (result == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		result[len] = src[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}
/*
int	main(void)
{
	const char  *orignial = "run and debug";
	char    *copy = strdup(orignial);
	int		i;

	i = 0;
	while (copy[i])
		i++;
	printf("the string created : %s\n", copy);
	printf("%c\n", copy[i - 1]);
	return 0; 
}
*/
