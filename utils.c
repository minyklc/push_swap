/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:00:12 by minpple           #+#    #+#             */
/*   Updated: 2025/12/23 22:28:51 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_joinstr(char *s1, char *s2)
{
	char	*string;
	int		i;
	int		j;
	int		len;

	i = -1;
	j = -1;
	len = ft_strlen(s1) + ft_strlen(s2);
	string = malloc(sizeof(char) * (len + 2));
	if (string == NULL)
		return (NULL);
	while (s1[++i])
		string[++j] = s1[i];
	i = -1;
	while (s2[++i])
		string[++j] = s2[i];
	string[++j] = ' ';
	string[++j] = '\0';
	return (string);
}
void	print_result_utils(s_stack *array)
{
	while (array)
	{
		ft_printf("nb : [%d] ", array->nb);
		ft_printf("pos : [%d]\n", array->pos);
		array = array->next;
	}
}