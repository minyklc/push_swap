/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:12:10 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 10:33:10 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct st_stack
{
	int				nb;
	int				pos;
	struct st_stack	*next;
}					t_stack;

// t_stack	*create_node(int nb);
t_stack	*split_to_stack(char ***args);
char	**error_mkstring(int i, char **str);
char	**ft_parsing(char **argv);
char	*ft_joinstr(char *s1, char *s2);
int		ft_strcmp(const char *s1, const char *s2);
int		nb_zeros(unsigned char *str);
int		check_nb(char *str);
int		check_args(char **args);
int		check_limits(char *str);
int		is_it_sorted(t_stack *array);
int		count_args(t_stack *stack);
int		find_max(t_stack *stack, int nb);
int		count_bitmax(int nbmax);
// void	pushback(t_stack **head, int nb);
void	ft_mkstring(int i, char **str, char **temp, char **argv);
void	ft_trindex(t_stack **head);
void	ft_algocheck(t_stack **head, int nbargs);
void	ft_two(t_stack **head);
void	ft_two_rev(t_stack **head);
void	ft_three(t_stack **head, int nbargs);
void	ft_three_rev(t_stack **head);
void	ft_median(t_stack **head, int nbargs);
void	ft_mediancheck(t_stack **stack_a, t_stack **stack_b, int nbargs);
void	ft_radix(t_stack **head, int nbargs, int bitmax);
void	free_stack(t_stack *stack);

// --- fonction temporaire à effacer ---
void	print_result_utils(t_stack *array);

// --- fonction cleaner ---
void	free_args(char ***args);
void	ft_cleaner(t_stack **array_a, char ***args);
void	destroy(t_stack **head);

// --- fonciton libft ---
char	**ft_split(char const *s, char c);
int		ft_strlen(const char *str);
int		ft_isdigit(int c);
char	*ft_strdup(const char *src);

// --- swap_n_push ---
void	sa(t_stack **head);
void	sb(t_stack **head);
void	pa(t_stack **head_a, t_stack **head_b);
void	pb(t_stack **head_a, t_stack **head_b);

// --- rotate_n_reverse ---
void	ra(t_stack **head);
void	rb(t_stack **head);
void	rra(t_stack **head);
void	rrb(t_stack **head);

// --- same_time ---
void	ss(t_stack **head_a, t_stack **head_b);
void	rr(t_stack **head_a, t_stack **head_b);
void	rrr(t_stack **head_a, t_stack **head_b);

// --- utils_stack.c ---
t_stack	*stack_new(int nb, int pos);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_find(t_stack *head, int nb);
void	stack_add_back(t_stack **stack, t_stack *new);
void	stack_add_front(t_stack **stack, t_stack *new);
void	stack_print(t_stack *head);

// --- utils_radix.c ---
int		check_binary(t_stack *head, int bit);

#endif
