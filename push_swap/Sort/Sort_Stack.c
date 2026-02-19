/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort_Stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:00:00 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:12:20 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_node **a, t_node **b, t_node *cheapest_node)
{
	if (cheapest_node->above_median
		&& cheapest_node->target_node->above_median)
	{
		while (*b != cheapest_node->target_node
			&& *a != cheapest_node)
			rr(a, b, true);
	}
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
	{
		while (*b != cheapest_node->target_node
			&& *a != cheapest_node)
			rrr(a, b, true);
	}
	current_index(*a);
	current_index(*b);
}

static void	move_a_to_b(t_node **a, t_node **b)
{
	t_node	*cheapest_node;

	cheapest_node = *a;
	while (cheapest_node->cheapest == false)
		cheapest_node = cheapest_node->next;
	rotate_both(a, b, cheapest_node);
	while (*b != cheapest_node->target_node)
	{
		if (cheapest_node->target_node->above_median)
			rb(b, true);
		else
			rrb(b, true);
	}
	while (*a != cheapest_node)
	{
		if (cheapest_node->above_median)
			ra(a, true);
		else
			rra(a, true);
	}
	pb(b, a, true);
}

static void	move_b_to_a(t_node **a, t_node **b)
{
	while (*a != (*b)->target_node)
	{
		if ((*b)->target_node->above_median)
			ra(a, true);
		else
			rra(a, true);
	}
	pa(a, b, true);
}

static void	min_on_top(t_node **a)
{
	while ((*a)->value != find_min(*a)->value)
	{
		if (find_min(*a)->above_median)
			ra(a, true);
		else
			rra(a, true);
	}
}

void	sort_stacks(t_node **a, t_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, true);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, true);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
