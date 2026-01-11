/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:08:33 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 18:35:08 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;

	tmpd = (unsigned char *)dest;
	tmps = (unsigned char *)src;
	if (tmpd > tmps)
	{
		tmpd += n;
		tmps += n;
		while (n-- != 0)
			*(--tmpd) = *(--tmps);
	}
	else
		ft_memcpy(tmpd, tmps, n);
	return (dest);
}

/*int main(void)
{
	char	src[9] = "abcdefgh";

	printf("original : %s\n", src);
	printf("%s\n", src + 2);
	ft_memmove(src + 2, src, 6);
	printf("ft_memmove : %s\n", src);
}*/
