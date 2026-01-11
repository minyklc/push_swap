/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:08:06 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:29:31 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	i = 0;
	lensrc = (size_t)ft_strlen(((char *)src));
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}

/*int	main(void)
{
	char	*src;
	char	dst[100];
	size_t	size;

	src = "lorem ipsum";
	size = -1;
	printf("dst : %s\n", dst);
	size = ft_strlcpy(dst, src, size);
	printf("size : %zu\n", size);
	printf("dst : %s\n", dst);
	write(1, dst, 15);
	return (0);
}*/
