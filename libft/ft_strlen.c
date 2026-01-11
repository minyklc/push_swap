/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:05:09 by msuizu            #+#    #+#             */
/*   Updated: 2025/12/18 23:56:31 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

// int	ft_strlen(const char *s)
// {
// 	int	index;

// 	index = -1;
// 	while (*(s + (++index)))
// 		;
// 	return (index);
// }

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	printf("%d\n", ft_strlen("a"));
	printf("%lu\n", strlen("a"));
	return (0);
}*/
