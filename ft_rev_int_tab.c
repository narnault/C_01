void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < (size / 2))
    {
        j = tab[i];
        tab[i] = tab[size -1 -i];
        tab[size -1 -i] = j;
        i++;
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    ft_rev_int_tab(tab, size);
}
