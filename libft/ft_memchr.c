/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:25:41 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:28:37 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	caracter;
	int		i;

	str = (char *)s;
	caracter = (unsigned char)c;
	i = 0;
	while (i < (int)n)
	{
		if (str[i] == caracter)
			return (str + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	char	*result;
	int		c;
	size_t			n;

	str = "je cherche la première occurence.\0";
	c = 2 + 256;
	n = 3;

	// result = memchr(str, c, n);
	// printf("memchr : %s\n", result);
	result = memchr(str, c, n);
	printf("memchr : %s\n", result);
	return (0);
}*/