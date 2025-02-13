/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:27:56 by whwang            #+#    #+#             */
/*   Updated: 2025/01/30 21:31:33 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{	
	int	*a;

	printf("%d\n", ft_ultimate_range(&a, 2, 5));
	printf("%p\n", a);
	for(int i=0;i<3;i++)
	{
		printf("%d ", a[i]);
	}
}
