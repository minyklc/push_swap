/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:33:42 by minpple           #+#    #+#             */
/*   Updated: 2025/12/12 01:20:31 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_conversion(va_list ap, char c)
{
	int	n;

	n = 0;
	if (c == 'c')
		n += ft_c(va_arg(ap, int));
	else if (c == 's')
		n += ft_s(va_arg(ap, char *));
	else if (c == 'p')
		n += ft_p(va_arg(ap, unsigned long long), "0123456789abcdef", 1);
	else if (c == 'd' || c == 'i')
		n += ft_d(va_arg(ap, int), n);
	else if (c == 'u')
		n += ft_u(va_arg(ap, unsigned int), n);
	else if (c == 'x')
		n += ft_x(va_arg(ap, unsigned int), "0123456789abcdef", n);
	else if (c == 'X')
		n += ft_bigx(va_arg(ap, unsigned int), "0123456789ABCDEF", n);
	else if (c == '%')
		n += ft_percent();
	return (n);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, str);
	i = 0;
	count = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_conversion(ap, str[i]);
		}
		else
			count += ft_c(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	// int		a;
// 	int		b;
// 	// void	*p;
// 	// char	*s;

// 	// a = 48;
// 	b = 0;
// 	// s = "abcjdhsgkjshgf";
// 	// p = s;
// 	// //ft_printf("hello je voudrais print ce nombre : %x\n", a);
// 	//a = printf("printf : %p\n", p);
// 	// b = ft_printf("%p\n", b);
// 	// ft_printf("%d\n", b);
// 	// b = printf("%p\n", b);
// 	// printf("%d\n", b);
// 	b = ft_printf(" %x ", 16);
// 	ft_printf("ft_printf return : %d\n", b);
// 	// b = printf("%p\n", p);
// 	// printf("printf return : %d\n", b);
// 	return (0);
// }

/*
#include <limits.h>
#include <stdio.h>

void test_char(void)
{
	printf("\n=== Testing %%c ===\n");
	printf("printf:    |%c|\n", 'A');
	ft_printf("ft_printf: |%c|\n", 'A');
	printf("printf:    |%c|\n", 'z');
	ft_printf("ft_printf: |%c|\n", 'z');
	printf("printf:    |%c|\n", '0');
	ft_printf("ft_printf: |%c|\n", '0');
	printf("printf:    |%c|\n", 0);
	ft_printf("ft_printf: |%c|\n", 0);
}

void test_string(void)
{
	printf("\n=== Testing %%s ===\n");
	printf("printf:    |%s|\n", "Hello World");
	ft_printf("ft_printf: |%s|\n", "Hello World");
	printf("printf:    |%s|\n", "");
	ft_printf("ft_printf: |%s|\n", "");
	printf("printf:    |%s|\n", "42");
	ft_printf("ft_printf: |%s|\n", "42");
	printf("printf:    |%s|\n", "Test string");
	ft_printf("ft_printf: |%s|\n", "Test string");
}

void test_integers(void)
{
	printf("\n=== Testing %%d and %%i ===\n");
	printf("printf:    |%d|\n", 42);
	ft_printf("ft_printf: |%d|\n", 42);
	printf("printf:    |%i|\n", -42);
	ft_printf("ft_printf: |%i|\n", -42);
	printf("printf:    |%d|\n", 0);
	ft_printf("ft_printf: |%d|\n", 0);
	printf("printf:    |%d|\n", INT_MAX);
	ft_printf("ft_printf: |%d|\n", INT_MAX);
	printf("printf:    |%d|\n", INT_MIN);
	ft_printf("ft_printf: |%d|\n", INT_MIN);
	printf("printf:    |%i|\n", 2147483647);
	ft_printf("ft_printf: |%i|\n", 2147483647);
	printf("printf:    |%i|\n", (int)-2147483648);
	ft_printf("ft_printf: |%i|\n", (int)-2147483648);
}

void test_unsigned(void)
{
	printf("\n=== Testing %%u ===\n");
	printf("printf:    |%u|\n", 42u);
	ft_printf("ft_printf: |%u|\n", 42u);
	printf("printf:    |%u|\n", 0u);
	ft_printf("ft_printf: |%u|\n", 0u);
	printf("printf:    |%u|\n", UINT_MAX);
	ft_printf("ft_printf: |%u|\n", UINT_MAX);
	printf("printf:    |%u|\n", 4294967295u);
	ft_printf("ft_printf: |%u|\n", 4294967295u);
	printf("printf:    |%u|\n", (unsigned int)-1);
	ft_printf("ft_printf: |%u|\n", (unsigned int)-1);
}

void test_hex_lower(void)
{
	printf("\n=== Testing %%x ===\n");
	printf("printf:    |%x|\n", 42);
	ft_printf("ft_printf: |%x|\n", 42);
	printf("printf:    |%x|\n", 0);
	ft_printf("ft_printf: |%x|\n", 0);
	printf("printf:    |%x|\n", 255);
	ft_printf("ft_printf: |%x|\n", 255);
	printf("printf:    |%x|\n", 16);
	ft_printf("ft_printf: |%x|\n", 16);
	printf("printf:    |%x|\n", UINT_MAX);
	ft_printf("ft_printf: |%x|\n", UINT_MAX);
	printf("printf:    |%x|\n", -1);
	ft_printf("ft_printf: |%x|\n", -1);
}

void test_hex_upper(void)
{
	printf("\n=== Testing %%X ===\n");
	printf("printf:    |%X|\n", 42);
	ft_printf("ft_printf: |%X|\n", 42);
	printf("printf:    |%X|\n", 0);
	ft_printf("ft_printf: |%X|\n", 0);
	printf("printf:    |%X|\n", 255);
	ft_printf("ft_printf: |%X|\n", 255);
	printf("printf:    |%X|\n", 16);
	ft_printf("ft_printf: |%X|\n", 16);
	printf("printf:    |%X|\n", UINT_MAX);
	ft_printf("ft_printf: |%X|\n", UINT_MAX);
	printf("printf:    |%X|\n", -1);
	ft_printf("ft_printf: |%X|\n", -1);
}

void test_pointer(void)
{
	printf("\n=== Testing %%p ===\n");
	int var = 42;
	char *str = "test";
	
 	printf("printf:    |%p|\n", &var);
	ft_printf("ft_printf: |%p|\n", &var);
	printf("printf:    |%p|\n", str);
	ft_printf("ft_printf: |%p|\n", str);
	printf("printf:    |%p|\n", (void *)0x42);
	ft_printf("ft_printf: |%p|\n", (void *)0x42);
}

void test_percent(void)
{
	printf("\n=== Testing %%%% ===\n");
	printf("printf:    |%%|\n");
	ft_printf("ft_printf: |%%|\n");
	printf("printf:    |%%%%|\n");
	ft_printf("ft_printf: |%%%%|\n");
	printf("printf:    |100%% success|\n");
	ft_printf("ft_printf: |100%% success|\n");
}

void test_mixed(void)
{
	printf("\n=== Testing mixed conversions ===\n");
	int num = 42;
	char *text = "test";
	
 	printf("printf:    |%s: %d, %x, %p|\n", text, num, num, &num);
	ft_printf("ft_printf: |%s: %d, %x, %p|\n", text, num, num, &num);
 	printf("printf:    |%c%c%c %d%%|\n", 'A', 'B', 'C', 100);
	ft_printf("ft_printf: |%c%c%c %d%%|\n", 'A', 'B', 'C', 100);
 	printf("printf:    |%s %s %s|\n", "Hello", "World", "!");
	ft_printf("ft_printf: |%s %s %s|\n", "Hello", "World", "!");
}

int main(void)
{
	printf("=== MANDATORY PART TESTS ===\n");
 	test_char();
	test_string();
	test_integers();
	test_unsigned();
	test_hex_lower();
	test_hex_upper();
	test_pointer();
	test_percent();
	test_mixed();
 	printf("\n=== Tests completed ===\n");

	return (0);
}
*/