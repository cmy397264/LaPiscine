#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int main()
{
    char *tab[] = {"ccc", NULL, "bbb", "aaa", "abaa", NULL};

    ft_sort_string_tab(tab);
    int i = 0;
    while (tab[i])
        printf("%s\n", tab[i++]);
}
