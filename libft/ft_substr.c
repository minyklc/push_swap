/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:56:53 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:30:08 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	j;

	j = (size_t)ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= j)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > j)
		len = j - start;
	substring = ft_calloc((len + 1), sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	return (substring);
}

/*int	main(void)
{
	char	*substring;
	char	*string;
	size_t	len;
	unsigned int	start;

	string = "holarabe";
	start = 4294967295;
	len = 1844674407370955161;
	substring = ft_substr(string, start, len);
	printf("[%s]\n", substring);
	free(substring);
	return (0);
}*/
