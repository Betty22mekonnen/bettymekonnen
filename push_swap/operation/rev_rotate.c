/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:30:09 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:06:26 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_node **stack)
{
	t_node	*last;
	int		len;

	len = stack_len(*stack);
	if (NULL == *stack || NULL == stack || len == 1)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_node **a, bool print)
{
	rev_rotate(a);
	if (print)
		write(1, "rra\n", 4);
}

void	rrb(t_node **b, bool print)
{
	rev_rotate(b);
	if (print)
		write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (print)
		write(1, "rrr\n", 4);
}
