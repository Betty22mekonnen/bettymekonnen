/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:43:31 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/29 21:29:19 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_format(char format, va_list args)
{
	if (format == '%')
		return (write(1, "%", 1));
	else if (format == 'c')
		return (print_char(va_arg(args, int)));
	else if (format == 's')
		return (print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (print_int(va_arg(args, int)));
	else if (format == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (print_hexa(va_arg(args, unsigned int), 0));
	else if (format == 'X')
		return (print_hexa(va_arg(args, unsigned int), 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_format(format[i], args);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
