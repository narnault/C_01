#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int *nbr = 0;
	int i = 0;
	nbr = &i;
	ft_ft(nbr);
	printf("%i", i);
}
