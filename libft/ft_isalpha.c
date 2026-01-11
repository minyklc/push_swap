/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:06:23 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/04 14:02:14 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

/*#include <stdio.h>

int	is_single_char(char *s)
{
	return (s && s[0] && !s[1]);
}

int main(int ac, char **av)
{
	char	c;

	if (ac != 2 || !is_single_char(av[1]))
	{
		fprintf(stderr, "Usage: %s <single_char>\n", av[0]);
		return (1);
	}
	c = av[1][0];
	printf("Is `%c` an alpha character?\n\n", c);
	if (ft_isalpha(c) == 0)
		printf("Nah :/\n");
	else
		printf("Yep!\n");
	return (0);
}*/
