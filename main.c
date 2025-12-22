/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 22:58:23 by minpple           #+#    #+#             */
/*   Updated: 2025/12/22 19:57:36 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;
	char	*str = ft_parser(argv);
	char	**args;

	i = 1;
//print agrv[i]
	if (argc >= 2)
	{
		while (argv[i])
		{
			printf("arg%d : [%s], ", i, argv[i]);
			i++;
		}
		printf("\n");
		if (str == NULL)
		{
			printf("input non valid\n");
			return (1);
		}
//print str
		else
			printf("str : [%s]", str);
	}
	printf("\n");
	args = ft_split(str, ' ');
	free(str);
	i = 0;
//print args
	while (args[i])
	{
		printf("tab1 : [%s], ", args[i]);
		//free(args[i]);
		i++;
	}
//create liste chainée
	printf("\n");
	
	free(args);
	return (0);
}
