/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:34:04 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/21 20:40:35 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	count_digit(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count += 1;
	while (n != 0)
	{
		n /= 10;
		count += 1;
	}
	return (count);
}

static void	put_int(int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
		put_int(n / 10);
	write(1, &digits[n % 10], 1);
}

int	print_int(int n)
{
	int	len;

	if (n == INT_MIN)
		return ((write(1, "-2147483648", 11)));
	len = count_digit(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	put_int(n);
	return (len);
}
