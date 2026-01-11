/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuizu <msuizu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:58:40 by msuizu            #+#    #+#             */
/*   Updated: 2025/11/17 15:28:31 by msuizu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n * -1 > 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr(int n, char *numb, int i)
{
	if (n > 9)
		ft_putnbr(n / 10, numb, i - 1);
	numb[i] = n % 10 + 48;
}

char	*ft_itoa(int n)
{
	char	*numb;
	int		min;
	int		len;

	min = 0;
	if (n == -2147483648)
	{
		n++;
		min++;
	}
	len = ft_intlen(n);
	numb = malloc(sizeof(char) * (len + 1));
	if (numb == NULL)
		return (NULL);
	numb[len] = '\0';
	if (n * -1 > 0)
	{
		numb[0] = '-';
		n = -n;
	}
	ft_putnbr(n, numb, len - 1);
	if (min != 0)
		numb[10] = '8';
	return (numb);
}

/*int	main(void)
{
	char	*numb;
	int		n;

	n = 1;
	numb = ft_itoa(n);
	printf("resultat : %s\n", numb);
	free(numb);
	return (0);
}*/
