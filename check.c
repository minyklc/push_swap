/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 23:43:29 by minpple           #+#    #+#             */
/*   Updated: 2025/12/30 23:53:41 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_args(char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!args[0] || !args[1])
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
		if (args[i] && ft_strcmp(args[j], args[i]) == 0 && i != j)
			return (1);
		j++;
	}
	return (0);
}

int	check_limits(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '0' || str[i] == '-' || str[i] == '+')
		i++;
	if ((ft_strlen(str + i) > 11) || (ft_strlen(str + i) > 10 && str[0] != '-'))
		return (1);
	if (ft_strlen(str + i) == 10 && str[0] == '-'
		&& ft_strncmp("2147483648", str + i, 11) < 0)
		return (2);
	else if (ft_strlen(str + i) == 10 && str[0] != '-'
		&& ft_strncmp("2147483647", str + i, 11) < 0)
		return (3);
	return (0);
}
