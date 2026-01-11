/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:54:38 by minpple           #+#    #+#             */
/*   Updated: 2025/12/10 16:46:33 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_c(int c);
int		ft_s(char *s);
int		ft_p(unsigned long long p, char *base, int n);
int		ft_d(int d, int n);
int		ft_u(unsigned int u, int n);
int		ft_x(unsigned int x, char *base, int n);
int		ft_bigx(unsigned int X, char *base, int n);
int		ft_percent(void);
void	ft_putchar(char c);
int		ft_printf(const char *str, ...);
int		ft_conversion(va_list ap, char c);

#endif 