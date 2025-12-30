/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_n_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 05:52:10 by mde-carv          #+#    #+#             */
/*   Updated: 2025/12/27 00:41:05 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **head)
{
	t_stack	*temp;

	if ((*head)->next == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}

void	sb(t_stack **head)
{
	sa(head);
}

void	pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*new;
	t_stack	*temp;

	if ((*head_b)->next == NULL)
		return ;
	new = stack_new((*head_a)->nb, (*head_a)->pos);
	stack_add_front(head_b, new);
	temp = (*head_a)->next;
	free(*head_a);
	*head_a = temp;
}

void	pb(t_stack **head_a, t_stack **head_b)
{
	pa(head_b, head_a);
}
