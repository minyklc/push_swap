/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:57:56 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:30:02 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

/*int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

static int	ft_istart(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	ft_iend(char const *s1, char const *set, int i)
{
	int	j;

	j = 0;
	i--;
	if (i < 0)
		return (i);
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	if (i == -1)
		return (ft_strlen(s1) - 1);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		t;

	t = 0;
	start = ft_istart(s1, set);
	end = ft_iend(s1, set, ft_strlen((char *)s1)) + 1;
	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	while (start < end)
	{
		trimmed[t] = s1[start];
		start++;
		t++;
	}
	trimmed[t] = '\0';
	return (trimmed);
}

/*int	main(void)
{
	char	*string;
	char	*trimmed;
	char	*set;

	string = "";
	set = "cdef";
	printf("%s|\n", string);
	trimmed = ft_strtrim(string, set);
	printf("%s|\n", trimmed);
	free(trimmed);
	return (0);
}*/
