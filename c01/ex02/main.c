#include <stdio.h>
void ft_swap(int *a, int *b);
int main(void)
{
	int a=3, b=5;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
}
