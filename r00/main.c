/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:20:06 by whwang            #+#    #+#             */
/*   Updated: 2025/01/25 14:51:49 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c);

void	print_abc(int ix, int iy, int x, int y)
{
	if (ix == 0 || ix == x - 1)
	{
		if (iy == 0 || iy == y - 1)
		{	
			if (ix == 0 && iy == y - 1 && iy != 0)
				ft_putchar("C");				
			else if (ix == x - 1 && y != 1 && iy == y - 1)
				ft_putchar("C");
			else
				ft_putchar("A");
		}
		else
			ft_putchar("B");
	}
	else
	{
		if (iy == 0 || iy == y - 1 || ix == 0 || ix == x - 1)
			ft_putchar("B");
		else
			ft_putchar(" ");
	}
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	ix = -1;
	while (++ix < x)
	{
		iy = -1;
		while (++iy < y)
		{
			print_abc(ix, iy, x, y);
		}
		ft_putchar("\n");
	}
	ft_putchar("\n");
}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}
