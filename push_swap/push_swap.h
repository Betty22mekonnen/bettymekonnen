/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:39:00 by bmekonne          #+#    #+#             */
/*   Updated: 2026/02/15 14:21:55 by bmekonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_node
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	bool			above_median;
	struct s_node	*target_node;
	int				push_cost;
	bool			cheapest;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;
}	t_stack;

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
}	t_stacks;

/* Initialization */
void	init_stack_a(t_node **a, char **argv);
void	free_stacks(t_stacks *s);
void	free_matrix(char **argv);

/* Operations - low level */
void	sa(t_node **a, bool print);
void	sb(t_node **b, bool print);
void	ss(t_node **a, t_node **b, bool print);
void	pa(t_node **a, t_node **b, bool print);
void	pb(t_node **b, t_node **a, bool print);
void	ra(t_node **a, bool print);
void	rb(t_node **b, bool print);
void	rr(t_node **a, t_node **b, bool print);
void	rra(t_node **a, bool print);
void	rrb(t_node **b, bool print);
void	rrr(t_node **a, t_node **b, bool print);

/* Sorting */
void	sort_stacks(t_node **a, t_node **b);
void	sort_three(t_node **a);
void	current_index(t_node *stack);
void	init_nodes_a(t_node *a, t_node *b);
void	init_nodes_b(t_node *a, t_node *b);
void	set_cheapest(t_node *stack);

/* Utils */
char	**ft_split(const char *str, char c);
int		stack_len(t_node *stack);
t_node	*find_last(t_node *stack);
bool	stack_sorted(t_node *stack);
t_node	*find_min(t_node *stack);
t_node	*find_max(t_node *stack);
long	ft_atol(const char *str);
void	append_node(t_node **stack, int n);

/* Error Handling */
void	ft_error(void);
void	free_stack(t_node **stack);
void	free_errors(t_node **a);
int		error_syntax(char *str_n);
int		error_duplicate(t_node *a, int n);
int		validate_input_args(int argc, char **argv);
void	handle_malloc_error(t_node **stack);
void	free_both_stacks(t_stacks *stacks);

#endif
