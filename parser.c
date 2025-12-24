/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:32 by minpple           #+#    #+#             */
/*   Updated: 2025/12/25 00:38:22 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
//#include "libft/libft.h"
#include "push_swap.h"

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

int	check_limits(char *str)
{
	if ((ft_strlen(str) > 11) || (ft_strlen(str) > 10 && str[0] != '-'))
		return (1);
	if (ft_strlen(str) == 11 && str[0] == '-' 
		&& ft_strncmp("-2147483648", str, 12) < 0)
		return (2);
	else if (ft_strlen(str) == 10 
		&& ft_strncmp("2147483647", str, 11) < 0)
		return (3);
	return (0);
}

int	check_args(char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!args[1])
		return (1);
	while (args[i])
	{
		if (!args[j])
		{
			if (check_limits(args[i]) != 0)
				return (2);
			j = 0;
			i++;
		}
		if (args[i] && ft_strncmp(args[j], args[i], 11) == 0 && i != j)
			return (1);
		j++;
	}
	return (0);
}

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

char	**ft_parser(char **argv)
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
					free_str(str);
				return (NULL);
			}
	}
	args = ft_split(str, ' ');
	free(str);
	if (check_args(args) != 0)
		return (free_args(args), NULL);
	return (args);
}
