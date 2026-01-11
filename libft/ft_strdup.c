/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:27:09 by msuizu            #+#    #+#             */
/*   Updated: 2026/01/05 18:59:50 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

char	*ft_strdup(const char *src)
{
	char	*str;
	int		size;
	int		i;

	size = ft_strlen(((char *)src));
	i = 0;
	str = malloc(size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*str;
	char	*str1;

	str = "ljhgkjehgf";
	str1 = ft_strdup(str);
	printf("%s\n", str1);
	free(str1);
	return (0);
}*/
