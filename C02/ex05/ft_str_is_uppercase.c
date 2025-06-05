/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:48:04 by bmekonne          #+#    #+#             */
/*   Updated: 2025/06/01 21:11:20 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "ADGHH";
	char	*str2 = "";
	char	*str3 = "25678";
	printf("str1 = %d\n", ft_str_is_uppercase(str1));
	printf("str2 = %d\n", ft_str_is_uppercase(str2));
	printf("str3 = %d\n", ft_str_is_uppercase(str3));

}
*/
