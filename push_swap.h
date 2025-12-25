/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:12:10 by minpple           #+#    #+#             */
/*   Updated: 2025/12/25 01:59:17 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct st_stack {
	int	nb;
	struct st_stack *next;
} s_stack;

s_stack	*create_node(int nb);
s_stack	*ft_parser2(char **args);
char	**ft_parser(char **argv);
char	*ft_joinstr(char *s1, char *s2);
int	ft_isdigit(int c);
int	check_nb(char *str);
int	check_args(char **args);
int	check_limits(char *str);
void	pushback(s_stack **head, int nb);
void	free_str(char *str);
void	free_args(char **args);

// --- fonction temporaire à effacer ---
void	ft_cleaner(s_stack *array_a, char **args);
void	print_result_utils(s_stack *array);

// --- fonciton libft ---
char	**ft_split(char const *s, char c);
int	ft_strlen(const char *str);

// --- operations_utils.c ---
void sa(s_stack **head);
void sb(s_stack **head);
void ss(s_stack **head_a, s_stack **head_b);
void pa(s_stack **head_a, s_stack **head_b);
void pb(s_stack **head_a, s_stack **head_b);
void ra(s_stack **head);
void rb(s_stack **head);
void rr(s_stack **head_a, s_stack **head_b);

// --- stack_utils.c ---
s_stack *stack_new(int nb);
s_stack *stack_last(s_stack *stack);
s_stack stack_add_back(s_stack **stack, s_stack *new);

#endif
