/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:58:07 by bmekonne          #+#    #+#             */
/*   Updated: 2025/11/21 21:02:15 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	str_length(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	print_str(char const *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, str_length(str)));
}
