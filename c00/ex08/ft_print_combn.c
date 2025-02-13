/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:42:25 by whwang            #+#    #+#             */
/*   Updated: 2025/01/24 01:48:40 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**arr = 조합을 판별할 배열, start = 현재 재귀 횟수, 
 * end = 재귀 종료 조건, num = 현재 재귀 시작 숫자*/

void	print_comma(int *arr, int end)
{
	int	i;
	int	flag;

	i = 0;
	while (i < end)
	{
		if (arr[i] != 1)
		{
			return ;
		}
		i++;
	}
	write(1, ", ", 2);
}

void	recur_comb(int *arr, int start, int end, int num)
{
	int	i;

	if (start == end)
	{
		i = 0;
		print_comma(arr, end);
		while (i < 10)
		{
			if (arr[i] == 1)
			{
				write(1, "0123456789" + i, 1);
			}
			i++;
		}
		return ;
	}
	else
	{
		while (num < 10)
		{
			arr[num] = 1;
			recur_comb(arr, start + 1, end, num + 1);
			arr[num++] = 0;
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];

	i = 0;
	while (i < 10)
	{
		arr[i++] = 0;
	}	
	recur_comb(arr, 0, n, 0);
}
