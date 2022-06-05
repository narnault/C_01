#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	
	i = *a % *b;
	*a = *a / *b;
	*b = i;
}

int main()
{
	int	i;
	int	j;
	int *a;
	int *b;

	i = 22;
	j = 3;
	a = &i;
	b = &j;
	printf ("%i\n" "%i\n", i, j);
	ft_ultimate_div_mod(a, b);
	printf ("\n%i\n" "%i\n", i, j);
}
