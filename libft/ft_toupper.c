/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:10:51 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/07 20:37:30 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	else
		return (c);
}
/*
int	main(void)
{
	int	i;
	char    str[] = "betty";
	char	*result = malloc(strlen(str) + 1);

	i = 0;
	while (str[i])
	{
		result[i] = (char) ft_toupper((unsigned char)str[i]);
		i++;
	}
	result[i] = '\0';
	printf("to upper case: %s ", result);
	free(result);
	return (0);	
}
*/
