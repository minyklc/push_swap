/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:58:19 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:29:05 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

static char	**ft_fillwords(char **splitted, const char *s, char c)
{
	int	mot;
	int	i;
	int	j;

	mot = 0;
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			splitted[mot][j] = s[i];
			i++;
			j++;
		}
		j = 0;
		while (s[i] == c && c != '\0')
			i++;
		mot++;
	}
	splitted[mot] = NULL;
	return (splitted);
}

static char	**ft_wordlloc(char **splitted, const char *s, char c)
{
	int	mot;
	int	i;
	int	j;

	mot = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i != j)
			splitted[mot] = ft_calloc((i - j) + 1, sizeof(char));
		mot++;
	}
	return (splitted);
}

static int	ft_nword(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;

	splitted = ft_calloc((ft_nword(s, c) + 1), sizeof(char *));
	if (splitted == NULL)
		return (NULL);
	if (ft_nword(s, c) == 0)
		return (splitted);
	splitted = ft_wordlloc(splitted, s, c);
	splitted = ft_fillwords(splitted, s, c);
	return (splitted);
}

/*int	main(void)
{
	char	*s;
	char	c;
	char	**splitted;
	int		i;

	s = "salut je suis etudiant";
	c = ' ';
	i = 0;
	splitted = ft_split(s, c);
	if (!splitted)
		return (0);
	while (splitted[i])
	{
		printf("[%s]\n", splitted[i]);
		printf("%d\n", i);
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return (0);
}*/
