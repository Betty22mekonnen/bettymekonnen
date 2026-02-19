/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:14:33 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/21 21:03:55 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	pr_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

void	put_unsigned(unsigned int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
		put_unsigned(n / 10);
	write(1, &digits[n % 10], 1);
}

int	print_unsigned(unsigned	int n)
{
	put_unsigned(n);
	return (pr_digits(n));
}
