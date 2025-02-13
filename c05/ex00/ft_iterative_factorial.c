/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 03:21:39 by whwang            #+#    #+#             */
/*   Updated: 2025/01/29 16:26:46 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	oup;
	int	i;

	oup = 1;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
	{
		i = 2;
		while (i <= nb)
		{
			oup *= i;
			i++;
		}
	}
	return (oup);
}
