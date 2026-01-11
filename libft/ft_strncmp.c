/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:25:25 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/10 10:09:04 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	i = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (tmp1[i] == tmp2[i] && tmp1[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (tmp1[i] - tmp2[i]);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	size_t		n;
	int			result;

	s1 = "abcdef";
	s2 = "abcdefghijklmnop";
	n = 6;
	result = strncmp(s1, s2, n);
	printf("strncmp : %d\n", result);
	result = ft_strncmp(s1, s2, n);
	printf("ft_strncmp : %d\n", result);
	return (0);
}*/
