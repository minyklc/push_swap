/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:11:08 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:29:11 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	caracter;
	int		i;

	caracter = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == caracter)
			return (((char *)s) + i);
		i++;
	}
	if (caracter == '\0')
		return (((char *)s) + i);
	return (NULL);
}

/*int	main(void)
{
	char	*s;
	char	*str;
	int	c;

	str = "abcdefgh";
	c = '\0';
	s = ft_strchr(str, c);
	printf("ft_strchr : %s\n", s);
	s = strchr(str, c);
	printf("strchr : %s\n", s);
	return (0);
}*/
