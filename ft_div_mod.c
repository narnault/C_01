#include <stdio.h>

void	ft_div_mod(int a, int b, int *div,int *mod)
{
	int	i;
	int	j;

	i = a / b;
	*div = i;
	j = a % b;
	*mod = j;
}

int main()
{
	int	a;
	int	b;
	int	i;
	int	j;
	int	*div; 
	int	*mod;

	a = 22;
	b = 2;
	i = 0;
	j = 0;
	div = &i;
	mod = &j;
	printf("%i\n" "%i\n" "%i\n" "%i\n", a, b, i, j);
	ft_div_mod(a, b, div, mod);
	printf("\n%i\n" "%i\n", i, j);
}
