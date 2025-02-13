#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));
int	cmp(char *s1, char *s2);

int main()
{
    char *tab[] = {"ccc", "bbb", "aaa", "abaa", NULL};

    ft_advanced_sort_string_tab(tab, cmp);
    int i = 0;
    while (tab[i])
        printf("%s ", tab[i++]);
}
