/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:26:07 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 18:34:42 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned int)tmp1[i] != (unsigned int)tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	size_t		n;
	int			result;

	s1 = "ab\0cdefg";
	s2 = "ab\0\0cdefh";
	n = 8;
	result = memcmp(s1, s2, n);
	printf("memcmp : %d\n", result);
	result = ft_memcmp(s1, s2, n);
	printf("ft_memcmp : %d\n", result);
	return (0);
}*/