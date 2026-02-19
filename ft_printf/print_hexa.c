/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:48:38 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/21 20:29:13 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	h_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	put_hexa(unsigned int nbr, bool upper_case)
{
	static char	upper_digits[] = "0123456789ABCDEF";
	static char	lower_digits[] = "0123456789abcdef";

	if (nbr >= 16)
		put_hexa((nbr / 16), upper_case);
	if (upper_case == true)
		write(1, &upper_digits[nbr % 16], 1);
	else
		write(1, &lower_digits[nbr % 16], 1);
}

int	print_hexa(unsigned int nbr, bool upper_case)
{
	put_hexa(nbr, upper_case);
	return (h_digits(nbr));
}
