/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 01:52:48 by minpple           #+#    #+#             */
/*   Updated: 2026/01/08 18:50:21 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix(t_stack **head, int nbargs, int bitmax)
{
	int		i;
	int		bit;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 0;
	bit = 0;
	stack_a = *head;
	stack_b = NULL;
	while (bit < bitmax)
	{
		while (i < nbargs)
		{
			if (stack_a->pos >> bit & 1)
				ra(&stack_a);
			else
				pb(&stack_a, &stack_b);
			i++;
		}
		i = 0;
		while (stack_b)
			pa(&stack_a, &stack_b);
		bit++;
	}
	destroy(&stack_a);
}

int	count_bitmax(int nbmax)
{
	int	bitmax;
	int	remainder;

	bitmax = 0;
	if (nbmax == 2)
		return (1);
	while (nbmax > 0)
	{
		remainder = nbmax % 2;
		nbmax = nbmax / 2 + remainder;
		bitmax++;
		if (nbmax == 2)
			break ;
	}
	if (nbmax == 2)
		bitmax++;
	return (bitmax);
}

int	check_binary(t_stack *head, int bit)
{
	while (head && head->pos >> bit & 1)
		head = head->next;
	if (!head)
		return (0);
	return (1);
}
