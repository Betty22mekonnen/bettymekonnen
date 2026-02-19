/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:17:38 by bmekonne          #+#    #+#             */
/*   Updated: 2025/10/17 19:50:45 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
int main()
{
    // Test 1: ft_putnbr_fd - Positive number
    printf("1. Positive Number (12345): ");
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    // Test 2: ft_putnbr_fd - Zero
    printf("2. Zero (0): ");
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    // Test 3: ft_putnbr_fd - Negative number
    printf("3. Negative Number (-5678): ");
    ft_putnbr_fd(-5678, 1);
    ft_putchar_fd('\n', 1);

    // Test 6: ft_putnbr_fd to Standard Error (fd 2)
    printf("6. Number to fd 2 (Error Stream): ");
    ft_putnbr_fd(999, 2);
    ft_putendl_fd(" (Error)", 2);
}
*/
