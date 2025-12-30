/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 06:01:50 by mde-carv          #+#    #+#             */
/*   Updated: 2025/12/26 15:43:30 by minpple          ###   ########.fr       */
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
	while (stack->nb != nb)
		stack = stack->next;
	return (stack);
}

/*t_stack	*stack_new(int nb)
{
	t_stack	*result;
	t_stack	*n;

	result = malloc(sizeof(t_stack));
	if (!result)
		return (NULL);
	n = result;
	n->nb = nb;
	n->next = NULL;
	return (result);
}*/

/*
void stack_print(t_stack *head)
{
  while (head != NULL)
  {
    printf("Nb: %i\n", head->nb);
    head = head->next;
  }
}
*/
