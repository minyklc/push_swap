/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trindex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:00:16 by minpple           #+#    #+#             */
/*   Updated: 2025/12/31 08:58:52 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_args(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	find_max(t_stack *stack, int nb)
{
	int	max;

	max = -2147483648;
	while (stack)
	{
		if (max < stack->nb && (stack->nb < nb))
			max = stack->nb;
		stack = stack->next;
	}
	return (max);
}

void	ft_trindex(t_stack **head)
{
	int	index;
	int	nb;

	index = count_args(*head) - 1;
	nb = 2147483647;
	if (stack_find(*head, nb))
	{
		stack_find(*head, nb)->pos = index;
		index--;
	}
	while (index >= 0)
	{
		nb = find_max(*head, nb);
		stack_find(*head, nb)->pos = index;
		index--;
	}
}
