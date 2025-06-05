/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:40:46 by bmekonne          #+#    #+#             */
/*   Updated: 2025/05/26 20:42:56 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	i;

	i = 0;
	int tab[5] = {1, 2, 3, 5, 6};
	ft_rev_int_tab(tab, 5);
	printf("{");
	while (i < 5)
        {
		printf("%d,", tab[i]);
		i++;
	}
	printf("}");
	return (0);
}
*/
