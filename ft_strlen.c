#include <stdio.h>

int    ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
	return (i);
}

int main()
{
        char str[] = "Salut tu vas bien";
        i = ft_strlen(str);
	printf("%i", ft_strlen(str));
}
