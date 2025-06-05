/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:18:48 by bmekonne          #+#    #+#             */
/*   Updated: 2025/06/04 19:29:46 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char str1[] = "4567";
	char str2[] = "\t  \n  4567";
	char str3[] = "-42";
	char str4[] = "--++42";

	printf("str 1: %s = %d\n", str1, ft_atoi(str1));
	printf("str 2: %s = %d\n", str2, ft_atoi(str2));
	printf("str 3: %s = %d\n", str3, ft_atoi(str3));
	printf("str 4: %s = %d\n", str4, ft_atoi(str4));
	return (0);
}
*/
