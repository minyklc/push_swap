#include <stdio.h>
#include <stdlib.h>

void truc_nul(int *a, int *b)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while(i < 2)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
		i++;
	}
}

int is_upper_to(int *n, int size)
{
	if((sizeof(n) / sizeof(n[0])) > size)
		return(1);
	return(0);
}

void sa(int *a)
{
	if(is_upper_to(a, 1))
	{
		int temp;
	
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
}

void sb(int *b)
{
	if(is_upper_to(b, 1))
	{
		int temp;

		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
	}
}

void ss(int *a, int *b)
{
	sa(a);
	sb(b);
}

void pa(int *a, int *b)
{
	if(is_upper_to(b, 0))
		a[0] = b[0];
}

void pb(int *a, int *b)
{
	if(is_upper_to(a, 0))
		b[0] = a[0];
}

void ra(int *a)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (d == s)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
		while (n--)
			d[n] = s[n];
	return (d);
}

int main(void)
{
	int i = 0;
	int a[] = {1, 2};
	int b[] = {3, 4};
	ra(a);
	printf("a: ");
	while(i < 2)
	{
		printf("%i ", a[i]);
		i++;
	}
	i = 0;
	printf("\nb: ");
	while(i < 2)
	{
		printf("%i ", b[i]);
		i++;
	}
}
