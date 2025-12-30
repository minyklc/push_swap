/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:38:00 by minpple           #+#    #+#             */
/*   Updated: 2025/12/30 23:56:59 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cleaner(t_stack *array_a, char **args)
{
	int		i;
	t_stack	*temp;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	while (array_a)
	{
		temp = array_a->next;
		free(array_a);
		array_a = temp;
	}
}

void	free_args(char **args)
{
	int	i;

	i = -1;
	if (!(args[0] && !args[1]))
		write(2, "Error\n", 6);
	else if (args[0] && check_limits(args[0]) != 0)
		write(2, "Error\n", 6);
	while (args[++i])
		free(args[i]);
	free(args);
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
