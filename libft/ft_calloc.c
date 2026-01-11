/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:26:56 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:28:14 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	array = malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);
}

/*int	main(void)
{
	int			i;
	size_t		nb;
	size_t		size;
	void	*array;

	nb = 0;
	i = 0;
	size = sizeof(int);
	array = calloc(nb, size);
	while (i < nb)
	{
		((int *) array)[i] = 5;
		printf("%d ", ((int *)array)[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);
}*/
