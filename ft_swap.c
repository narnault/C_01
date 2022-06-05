#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

int main()
{
	int	i;
	int	j;
	int	*a, *b;

	i = 22;
	j = 33;
	a = &i;
	b = &j;
	printf("%i\n" "%i\n", i, j);
	ft_swap(a, b);
	printf("%i\n" "%i\n", i, j);

}
