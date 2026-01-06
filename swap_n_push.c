/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_n_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 05:52:10 by mde-carv          #+#    #+#             */
/*   Updated: 2026/01/06 06:36:49 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **head)
{
	t_stack	*temp;

	if ((*head) == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
	write(1, "sa\n", 3);
}

void	sb(t_stack **head)
{
	t_stack	*temp;

	if ((*head) == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
	write(1, "sb\n", 3);
}

void	pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	temp = *head_b;
	*head_b = temp->next;
	temp->next = *head_a;
	*head_a = temp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	temp = *head_a;
	*head_a = temp->next;
	temp->next = *head_b;
	*head_b = temp;
	write(1, "pb\n", 3);
}
