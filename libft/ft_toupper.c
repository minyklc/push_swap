/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:55:41 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/10 09:59:42 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	int	c = 'z';

	write(1, &c, 1);
	write(1, "\n", 1);
	c = ft_toupper(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}*/
