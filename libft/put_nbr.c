/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:46:05 by minpple           #+#    #+#             */
/*   Updated: 2025/12/10 15:28:09 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long long p, char *base, int n)
{
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (n == 1)
	{
		write(1, "0x", 2);
		n = n + 2;
	}
	if (p > 15)
		n = ft_p(p / 16, base, n + 1);
	p = p % 16;
	write(1, &base[p], 1);
	return (n);
}

int	ft_d(int d, int n)
{
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (d < 0)
	{
		d = -d;
		write(1, "-", 1);
		n++;
	}
	if (d > 9)
		n = ft_d(d / 10, n++);
	d = d % 10 + 48;
	write(1, &d, 1);
	return (n + 1);
}

int	ft_x(unsigned int x, char *base, int n)
{
	if (x >= 16)
		n = ft_x(x / 16, base, n++);
	x = x % 16;
	write(1, &base[x], 1);
	return (n + 1);
}

int	ft_bigx(unsigned int X, char *base, int n)
{
	if (X >= 16)
		n = ft_bigx(X / 16, base, n++);
	X = X % 16;
	write(1, &base[X], 1);
	return (n + 1);
}

int	ft_u(unsigned int u, int n)
{
	if (u > 9)
		n = ft_u(u / 10, n++);
	u = u % 10 + 48;
	write(1, &u, 1);
	return (n + 1);
}
