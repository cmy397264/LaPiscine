/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:05:17 by whwang            #+#    #+#             */
/*   Updated: 2025/02/03 13:34:40 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*a;
	int	i;

	a = ft_range(2, 5);
	printf("%p\n", a);
	i = 0;
	while (i < 3)
		printf("%d ", a[i++]);	
	return (0);
}
