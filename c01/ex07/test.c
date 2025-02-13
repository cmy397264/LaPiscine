/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:18:08 by whwang            #+#    #+#             */
/*   Updated: 2025/01/24 12:23:43 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	*temp;

	n = 0;
	while (size / 2 >= n)
	{
		*temp = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = *temp;
		n++;
	}	
}

int main(){
	int a[5] = {1,2,3,4,5};
	ft_rev_int_tab(a, 5);

	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
	}
}
