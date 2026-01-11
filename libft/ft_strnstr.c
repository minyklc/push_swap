/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:26:24 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:29:50 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
#include <stdio.h>

/*int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)(big + (i - j)));
		}
		i = i - (j - 1);
	}
	return (NULL);
}

/*int	main(void)
{
	char	*result;
	char	*haystack;
	char	*needle;
	size_t		len;

	haystack = "arabe";
	needle = "q";
	len = 1000;
	result = strnstr(haystack, needle, len);
	printf("strnstr : %s\n\n", result);
	result = ft_strnstr(haystack, needle, len);
	printf("ft_strnstr : %s\n", result);
	return (0);
}*/
