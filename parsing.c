/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:32 by minpple           #+#    #+#             */
/*   Updated: 2025/12/27 01:33:25 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*split_to_stack(char **args)
{
	t_stack	*array_a;
	t_stack	*new_node;
	int		i;

	array_a = NULL;
	i = 0;
	while (args[i])
	{
		new_node = stack_new(ft_atoi(args[i]), -1);
		stack_add_back(&array_a, new_node);
		i++;
	}
	return (array_a);
}

char	**ft_parsing(char **argv)
{
	int		i;
	char	*str;
	char	**args;

	str = "";
	i = 0;
	while (argv[++i])
	{
		if (check_nb(argv[i]) == 0)
			str = ft_joinstr(str, argv[i]);
		else
		{
			if (i != 1)
				free(str);
			write(2, "Error\n", 6);
			return (NULL);
		}
	}
	args = ft_split(str, ' ');
	free(str);
	if (check_args(args) != 0)
		return (free_args(args), NULL);
	return (args);
}
