/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:36:39 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/10 09:55:06 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (c);
	return (0);
}

/*int main(int ac, char **av)
{
	char	c;

	if (ac != 2 || !is_single_char(av[1]))
	{
		fprintf(stderr, "Usage: %s <single_char>\n", av[0]);
		return (1);
	}
	c = av[1][0];
	printf("Is `%c` an alpha numeric character?\n\n", c);
	if (ft_isalnum(c) == 0)
		printf("Nah :/\n");
	else
		printf("Yep!\n");
	return (0);
}*/
