/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:00:12 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 06:31:30 by minpple          ###   ########.fr       */
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

void	stack_print(t_stack *head)
{
	while (head != NULL)
	{
		printf("Nb: %i Pos: %i\n", head->nb, head->pos);
		head = head->next;
	}
}

int	is_it_sorted(t_stack *array)
{
	while (array->next)
	{
		if (array->nb > array->next->nb)
			return (1);
		array = array->next;
	}
	return (0);
}

int	nb_zeros(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == '0' || str[i] == '-' || str[i] == '+'))
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	int				sign;
	size_t			i;

	i = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	sign = 1;
	if ((tmp1[0] == '-' && tmp2[0] == '-')
		|| ((tmp1[0] == '+' || ft_isdigit(tmp1[0]) != 0)
			&& (tmp2[0] == '+' || ft_isdigit(tmp2[0]) != 0)))
		sign = 0;
	tmp1 = tmp1 + nb_zeros(tmp1);
	tmp2 = tmp2 + nb_zeros(tmp2);
	if (!tmp1[i] && !tmp2[i])
		return (0);
	if (sign == 1)
		return (1);
	while (tmp1[i] && tmp1[i] == tmp2[i] && sign == 0)
		i++;
	return (tmp1[i] - tmp2[i]);
}
