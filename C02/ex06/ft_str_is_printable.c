/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:18:12 by bmekonne          #+#    #+#             */
/*   Updated: 2025/06/01 21:15:50 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] < 127))
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
	char	*str1 = "dghahj";
	char	*str2 = "####";
	char	*str3 = "\thjfj\n";
	printf("str1 = %d\n", ft_str_is_printable(str1));
	printf("str2 = %d\n", ft_str_is_printable(str2));
	printf("str3 = %d\n", ft_str_is_printable(str3));

}
*/
