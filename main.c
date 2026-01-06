/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 22:58:23 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 10:56:48 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**args;
	t_stack	*array;

	if (argc > 1)
	{
		args = ft_parsing(argv);
		if (!args)
			return (1);
		array = split_to_stack(&args);
		if (is_it_sorted(array) == 0)
			return (destroy(&array), 0);
		ft_trindex(&array);
		ft_algocheck(&array, count_args(array));
	}
	return (0);
}
