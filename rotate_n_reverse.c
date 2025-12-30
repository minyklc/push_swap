/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_n_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 05:50:32 by mde-carv          #+#    #+#             */
/*   Updated: 2025/12/26 09:37:36 by minpple          ###   ########.fr       */
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
	destroy(&temp_head);
}

void	rb(t_stack **head)
{
	ra(head);
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
}

void	rrb(t_stack **head)
{
	rra(head);
}
