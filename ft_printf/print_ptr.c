/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:51 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/21 20:59:17 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_ptr(uintptr_t n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += put_ptr(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	print_ptr(void *ptr)
{
	int			printed;
	uintptr_t	addr;

	printed = 0;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (uintptr_t)ptr;
	write(1, "0x", 2);
	printed = 2;
	printed += put_ptr(addr);
	return (printed);
}
