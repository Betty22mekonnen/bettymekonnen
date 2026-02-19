/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:39:26 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:22:52 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_selection(t_node **a, t_node **b)
{
	if (stack_len(*a) == 2)
		sa(a, true);
	else if (stack_len(*a) == 3)
		sort_three(a);
	else
		sort_stacks(a, b);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = argv + 1;
	init_stack_a(&a, argv);
	if (!stack_sorted(a))
		sort_selection(&a, &b);
	free_stack(&a);
	if (argc == 2)
		free_matrix(argv);
	return (0);
}
