/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_b_to_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:49:45 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:09:04 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_b(t_node *a, t_node *b)
{
	t_node	*curr_a;
	t_node	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		curr_a = a;
		while (curr_a)
		{
			if (curr_a->value > b->value
				&& curr_a->value < best_match_index)
			{
				best_match_index = curr_a->value;
				target_node = curr_a;
			}
			curr_a = curr_a->next;
		}
		if (best_match_index == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	init_nodes_b(t_node *a, t_node *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
