/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:57:35 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/10 10:09:25 by msuizu           ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = -1;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (NULL);
	while (s1[i])
	{
		string[++j] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		string[++j] = s2[i];
		i++;
	}
	string[++j] = '\0';
	return (string);
}

/*int	main(void)
{
	char	*string;
	char	*s1;
	char	*s2;

	s1 = "la partie A..";
	s2 = " voudrais etre accompagné de la partie B.";
	string = ft_strjoin(s1, s2);
	printf("%s\n", string);
	free(string);
	return (0);
}*/
