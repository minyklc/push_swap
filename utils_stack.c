/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:31:27 by minpple           #+#    #+#             */
/*   Updated: 2026/01/11 00:31:29 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int nb, int pos)
{
	t_stack	*array;

	array = malloc(sizeof(t_stack));
	if (!array)
		return (NULL);
	array->nb = nb;
	array->pos = pos;
	array->next = NULL;
	return (array);
}

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (stack);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	if (*stack)
		stack_last(*stack)->next = new;
	else
		*stack = new;
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

t_stack	*stack_find(t_stack *stack, int nb)
{
	while (stack && stack->nb != nb)
		stack = stack->next;
	return (stack);
}
