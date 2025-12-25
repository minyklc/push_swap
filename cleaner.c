/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:38:00 by minpple           #+#    #+#             */
/*   Updated: 2025/12/25 01:07:50 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cleaner(s_stack *array_a, char **args)
{
	int	i;
	s_stack	*temp;

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

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	ft_printf("Error\n");
}

void	free_str(char *str)
{
	free(str);
	ft_printf("Error\n");
}
