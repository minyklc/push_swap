/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_n_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:31:17 by minpple           #+#    #+#             */
/*   Updated: 2026/01/11 00:31:19 by minpple          ###   ########.fr       */
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
