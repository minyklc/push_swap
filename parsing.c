/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:32 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 06:29:29 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*split_to_stack(char ***args)
{
	t_stack	*array_a;
	t_stack	*new_node;
	int		i;

	array_a = NULL;
	i = 0;
	while ((*args)[i])
	{
		new_node = stack_new(ft_atoi((*args)[i]), -1);
		stack_add_back(&array_a, new_node);
		free((*args)[i]);
		i++;
	}
	return (free(*args), array_a);
}

void	ft_mkstring(int i, char **str, char **temp, char **argv)
{
	*temp = ft_strdup(*str);
	free(*str);
	*str = NULL;
	*str = ft_joinstr(*temp, argv[i]);
	free(*temp);
	*temp = NULL;
}

char	**error_mkstring(int i, char **str)
{
	if (i != 1)
		free(*str);
	write(2, "Error\n", 6);
	return (NULL);
}

char	**ft_parsing(char **argv)
{
	int		i;
	char	*str;
	char	*temp;
	char	**args;

	str = NULL;
	temp = "";
	i = 0;
	while (argv[++i])
	{
		if (check_nb(argv[i]) == 0)
		{
			if (str)
				ft_mkstring(i, &str, &temp, argv);
			else
				str = ft_joinstr(temp, argv[i]);
		}
		else
			return (error_mkstring(i, &str));
	}
	args = ft_split(str, ' ');
	free(str);
	if (check_args(args) != 0)
		return (free_args(&args), NULL);
	return (args);
}
