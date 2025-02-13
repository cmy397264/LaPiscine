/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:16:00 by whwang            #+#    #+#             */
/*   Updated: 2025/02/10 17:18:35 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

int	main(void){
	int arr[] = {1,2,3,4};
	ft_foreach(arr, 4, ft_putnbr);
}
