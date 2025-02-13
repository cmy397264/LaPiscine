/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 03:31:25 by whwang            #+#    #+#             */
/*   Updated: 2025/01/28 14:18:19 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	oup;

	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else
	{
		oup = 1;
		while (0 < power)
		{
			oup *= nb;
			power--;
		}
	}
	return (oup);
}
