/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 07:01:49 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 10:49:37 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two_rev(t_stack **head)
{
	if ((*head)->pos < (*head)->next->pos)
		sb(head);
}

void	ft_three_rev(t_stack **head)
{
	if (0 != (stack_last(*head))->pos)
	{
		if (0 == (*head)->pos)
			rb(head);
		else
			rrb(head);
	}
	if ((*head)->pos < (*head)->next->pos)
		sb(head);
}

void	ft_mediancheck(t_stack **stack_a, t_stack **stack_b, int nbargs)
{
	if (nbargs == 4)
	{
		ft_two_rev(stack_b);
		ft_two(stack_a);
	}
	else if (nbargs == 5)
	{
		ft_three_rev(stack_b);
		ft_two(stack_a);
	}
	else if (nbargs == 6)
	{
		ft_three_rev(stack_b);
		ft_three(stack_a, nbargs);
	}
}
