/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:37:07 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:27:58 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **head)
{
	t_node	*first;
	t_node	*second;

	if (!*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*head = second;
}

void	sa(t_node **a, bool print)
{
	swap(a);
	if (print)
		write(1, "sa\n", 3);
}

void	sb(t_node **b, bool print)
{
	swap(b);
	if (print)
		write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b, bool print)
{
	swap(a);
	swap(b);
	if (print)
		write(1, "ss\n", 3);
}
