#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size) {
    int    i;
    int    j;

    i = 0;
    while (i < size - 1)
    {
        while (tab[i] > tab[i + 1])
        {
            j = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = j;
            i = 0;
        }
        i++;
    }
}

int        main(void)
{
    int tab[10] = {30,5,2,3,4,8,16,20,24,55};
    ft_sort_int_tab(tab, 10);
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]); 
    }
}
