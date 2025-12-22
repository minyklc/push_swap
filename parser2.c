/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:00:54 by minpple           #+#    #+#             */
/*   Updated: 2025/12/22 20:40:30 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	create_node(int nb, int pos)
{
	stack	*array;

	array = malloc(sizeof(stack));
	if (!array)
		return (NULL);
	array->nb = nb;
	array->pos = pos;
	array->next = NULL;
	return (array);
}

void	pushback(stack **head, int nb, int pos)
{
	stack	*newnode;
	
	newnode = create_node(nb, pos)
	if (!(*head))
	{
		head = 
	}
	while (lst->next)
		lst = lst->next;
	return (lst);
}

stack	ft_parser2(char **args)
{
	stack	*arrayA = NULL;
	int	i;

	i = 0;
	while (args[i])
	{
		pushback(&arrayA, ft_atoi(args[i]), i);
		i++;
	}
	return (&arrayA);
}


1 2 3 "2 3 4"


// int	check_nb_args(char *str)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i])
// 	{
// 		while (str[i] == ' ')
// 			i++;
// 		if (str[i] && (ft_isdigit(str[i]) || str[i] == '-' || str[i] == '+'))
// 			count++;
// 		while (str[i] && str[i] != ' ')
// 			i++;
// 	}
// 	return (count);
// }

// char	**ft_parser2(char **argv)
// {
// 	char	**args;
	
// 	args = malloc(sizeof(*char) * )
// 	return (args);
// }