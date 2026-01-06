/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:38:00 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 06:35:17 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cleaner(t_stack **array_a, char ***args)
{
	free_args(args);
	destroy(array_a);
}

void	free_args(char ***args)
{
	int	i;

	i = -1;
	if (!((*args)[0] && !(*args)[1]))
		write(2, "Error\n", 6);
	else if ((*args)[0] && check_limits((*args)[0]) != 0)
		write(2, "Error\n", 6);
	while ((*args)[++i])
		free((*args)[i]);
	free((*args));
}

void	destroy(t_stack **head)
{
	t_stack	*current;
	t_stack	*next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}
