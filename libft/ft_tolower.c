/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:06:46 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/10 09:56:10 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	int	c = '0';

	write(1, &c, 1);
	write(1, "\n", 1);
	c = ft_tolower(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}*/
