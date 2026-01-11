/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:43:01 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:29:26 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t s)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = (size_t)ft_strlen(dest);
	len_s = (size_t)ft_strlen(src);
	if (len_d >= s)
		return (s + len_s);
	while (i + len_d < s - 1 && i < len_s)
	{
		dest[i + len_d] = src[i];
		i++;
	}
	dest[i + len_d] = '\0';
	return (len_d + len_s);
}

/*int	main(void)
{
	//char	*src = "world !";
	char	dst[1000] = "";
	size_t	s;

	s = 7;
	s = strlcat(dst, "123", 0);
	printf("tried to create a string of [%lu], output :\n[%s]\n", s, dst);
	//printf("premier caractère de src : %c", dst[s - 1]);
	return (0);
}*/
