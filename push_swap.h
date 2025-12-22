/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:12:10 by minpple           #+#    #+#             */
/*   Updated: 2025/12/22 20:24:25 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

struct st_stack {
	int	nb;
	int	pos;
	stack *next;
} stack;

char	**ft_split(char const *s, char c);
char	*ft_joinstr(char *s1, char *s2);
char	*ft_parser(char **argv);
int	ft_isdigit(int c);
int	ft_strlen(const char *str);
int	check_nb(char *str);

#endif