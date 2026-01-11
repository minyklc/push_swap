/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 07:34:15 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/10 10:01:35 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return ((void *)0);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[8] = "texttest";
	char	src[8] = "texttest";

	printf("memcpy renvoie: %s\n", (char *) memcpy(src + 2, src, 6));
	printf("ft_memcpy renvoie: %s\n", (char *) ft_memcpy(src + 2, src, 6));
	return (0);
}*/
