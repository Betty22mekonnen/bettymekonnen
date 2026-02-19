/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:43:17 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/21 20:37:43 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdbool.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	print_ptr(void *ptr);
int	print_str(char const *str);
int	print_int(int n);
int	print_unsigned(unsigned	int n);
int	print_hexa(unsigned int nbr, bool upper_case);

#endif
