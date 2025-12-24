/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:12:10 by minpple           #+#    #+#             */
/*   Updated: 2025/12/24 15:28:09 by minpple          ###   ########.fr       */
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
	int	pos;
	struct st_stack *next;
} s_stack;

s_stack	*create_node(int nb, int pos);
s_stack	*ft_parser2(char **args);
char	**ft_split(char const *s, char c);
char	**ft_parser(char **argv);
char	*ft_joinstr(char *s1, char *s2);
int	ft_isdigit(int c);
int	ft_strlen(const char *str);
int	check_nb(char *str);
void	pushback(s_stack **head, int nb, int pos);
void	ft_parser_error(char *str);
//fonction temporaire à effacer
void	ft_cleaner(s_stack *array_a, char **args);
void	print_result_utils(s_stack *array);


#endif