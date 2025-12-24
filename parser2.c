/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:00:54 by minpple           #+#    #+#             */
/*   Updated: 2025/12/24 17:48:40 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_stack	*create_node(int nb)
{
	s_stack	*array;

	array = malloc(sizeof(s_stack));
	if (!array)
		return (NULL);
	array->nb = nb;
	array->next = NULL;
	return (array);
}

void	pushback(s_stack **head, int nb)
{
	s_stack	*newnode;
	s_stack	*current;
	
	newnode = create_node(nb);
	if (!(*head))
	{
		*head = newnode;
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newnode;
}

s_stack	*ft_parser2(char **args)
{
	s_stack	*arrayA = NULL;
	int	i;

	i = 0;
	while (args[i])
	{
		pushback(&arrayA, ft_atoi(args[i]));
		i++;
	}
	return (arrayA);
}
