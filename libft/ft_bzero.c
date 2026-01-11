/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:27:54 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:28:02 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <strings.h>
//#include <stdio.h>

void	ft_bzero(void *tab, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)tab)[i] = '\0';
		i++;
	}
}

/*int	main (void)
{
	int tab[10] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
	int	i;

	i = 0;
	printf("avant le bzero : ");
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	bzero(tab, sizeof(int) * 3);
	printf("après le bzero : ");
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	//bzero(&s, 4);
	return (0);
}*/
