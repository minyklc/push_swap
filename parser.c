/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:32 by minpple           #+#    #+#             */
/*   Updated: 2025/12/22 13:14:39 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
//#include "libft/libft.h"
#include "push_swap.h"

int	check_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && !(str[i] >= '0' && str[i] <= '9') 
			&& str[i] != '-' && str[i] != '+')
			return (1);
		else if (str[i] == '-' && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (2);
		else if (str[i] == '-' && i != 0 && str[i - 1] != ' ')
			return (3);
		else if (str[i] == '+' && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (4);
		else if (str[i] == '+' && i != 0 && str[i - 1] != ' ')
			return (5);
		i++;
	}
	return (0);
}

char	*ft_parser(char **argv)
{
	int		i;
	char	*str;

	str = "";
	i = 1;
	while (argv[i])
	{
		if (check_nb(argv[i]) == 0)
			str = ft_joinstr(str, argv[i]);
		else
			{
				if (i != 1)
				{
					free(str);
					str = NULL;
				}
				return (str);
			}
		i++;
	}
	return (str);
}
