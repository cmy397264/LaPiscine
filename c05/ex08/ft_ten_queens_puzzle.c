/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:33:03 by whwang            #+#    #+#             */
/*   Updated: 2025/02/07 11:26:26 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	promising(int cols[10], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (cols[i] == cols[n])
		{
			return (0);
		}
		if (n - i == cols[n] - cols[i] || n - i == cols[i] - cols[n])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	recur_queens(int cols[10], int *c, int n)
{
	int	i;

	if (promising(cols, n - 1))
	{
		i = 0;
		if (n == 10)
		{
			while (i < 10)
			{
				write(1, &"0123456789"[cols[i]], 1);
				i++;
			}
			write(1, "\n", 1);
			(*c)++;
		}
		else
		{
			while (i < 10)
			{	
				cols[n] = i;
				recur_queens(cols, c, n + 1);
				i++;
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	count;
	int	columns[10];

	i = 0;
	count = 0;
	while (i < 10)
	{
		columns[i] = -1;
		i++;
	}
	recur_queens(columns, &count, 0);
	return (count);
}
