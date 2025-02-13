/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:39:00 by whwang            #+#    #+#             */
/*   Updated: 2025/01/23 21:52:47 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur_print(int nb)
{
	if (nb > 9)
	{
		recur_print(nb / 10);
		write(1, &"0123456789"[nb % 10], 1);
	}
	else
	{
		write(1, &"0123456789"[nb], 1);
	}
}

void	ft_putnbr(int nb)
{
	int	inp;

	inp = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		inp = -nb;
	}
	recur_print(inp);
}
