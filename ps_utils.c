/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:00:12 by minpple           #+#    #+#             */
/*   Updated: 2025/12/22 13:45:16 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

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
