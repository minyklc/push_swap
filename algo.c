/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 06:42:15 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 10:57:22 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two(t_stack **head)
{
	if ((*head)->pos > (*head)->next->pos)
		sa(head);
}

void	ft_three(t_stack **head, int nbargs)
{
	if ((nbargs - 1) != (stack_last(*head))->pos)
	{
		if ((nbargs - 1) == (*head)->pos)
			ra(head);
		else
			rra(head);
	}
	if ((*head)->pos > (*head)->next->pos)
		sa(head);
}

void	ft_median(t_stack **head, int nbargs)
{
	int		i;
	int		median;
	t_stack	*stack_b;

	i = 0;
	median = (nbargs - 1) / 2 + 1;
	stack_b = NULL;
	while (i <= nbargs)
	{
		if ((*head)->pos < median)
			pb(head, &stack_b);
		else
			ra(head);
		i++;
	}
	ft_mediancheck(head, &stack_b, nbargs);
	while (stack_b)
		pa(head, &stack_b);
	destroy(head);
}

void	ft_algocheck(t_stack **head, int nbargs)
{
	if (nbargs == 2)
		ft_two(head);
	else if (nbargs == 3)
		ft_three(head, nbargs);
	else if (nbargs < 7)
		ft_median(head, nbargs);
	else
		ft_radix(head, nbargs, count_bitmax(nbargs));
}
