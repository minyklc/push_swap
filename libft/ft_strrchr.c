/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:39:22 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 16:14:10 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	caracter;
	int		i;
	int		occ;

	caracter = (char)c;
	i = 0;
	occ = 0;
	if (caracter == '\0')
		return (((char *)s) + ft_strlen(s));
	while (s[i])
	{
		if (((char *)s)[i] == caracter)
			occ = i + 1;
		i++;
	}
	occ--;
	if (occ != -1)
		return (((char *)s) + (occ));
	return (NULL);
}

/*int	main(void)
{
	char	*s;
	char	*str;
	int	c;

	str = "abcdefgeh";
	c = 'e';
	s = strrchr(str, c);
	printf("strrchr : %s\n", s);
	s = strrchr(str, c);
	printf("strrchr : %s\n", s);
	return (0);
}*/