/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:32:15 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:27:53 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*last_node;
	int		len;

	len = stack_len(*stack);
	if (NULL == *stack || NULL == stack || len == 1)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	(*stack)->prev = last_node;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}

void	ra(t_node **a, bool print)
{
	rotate(a);
	if (print)
		write(1, "ra\n", 3);
}

void	rb(t_node **b, bool print)
{
	rotate(b);
	if (print)
		write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b, bool print)
{
	rotate(a);
	rotate(b);
	if (print)
		write(1, "rr\n", 3);
}
