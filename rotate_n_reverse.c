/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_n_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:31:09 by minpple           #+#    #+#             */
/*   Updated: 2026/01/11 00:31:10 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ra(t_stack **head)
{
	t_stack	*new;
	t_stack	*temp_head;

	new = stack_new((*head)->nb, (*head)->pos);
	stack_add_back(head, new);
	temp_head = *head;
	*head = (*head)->next;
	free(temp_head);
	write(1, "ra\n", 3);
}

void	rb(t_stack **head)
{
	t_stack	*new;
	t_stack	*temp_head;

	new = stack_new((*head)->nb, (*head)->pos);
	stack_add_back(head, new);
	temp_head = *head;
	*head = (*head)->next;
	free(temp_head);
	write(1, "rb\n", 3);
}

void	rra(t_stack **head)
{
	t_stack	*last;
	t_stack	*second_to_last;

	second_to_last = *head;
	while (second_to_last->next->next != NULL)
		second_to_last = second_to_last->next;
	last = second_to_last->next;
	second_to_last->next = NULL;
	last->next = *head;
	*head = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **head)
{
	t_stack	*last;
	t_stack	*second_to_last;

	second_to_last = *head;
	while (second_to_last->next->next != NULL)
		second_to_last = second_to_last->next;
	last = second_to_last->next;
	second_to_last->next = NULL;
	last->next = *head;
	*head = last;
	write(1, "rrb\n", 4);
}
