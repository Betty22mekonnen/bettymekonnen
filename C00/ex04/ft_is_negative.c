/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:13:16 by bmekonne          #+#    #+#             */
/*   Updated: 2025/05/20 13:40:12 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P\n", 2);
	}
	else
	{
		write(1, "N\n", 2);
	}
}

/*int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(2);
	return (0);
}
*/
