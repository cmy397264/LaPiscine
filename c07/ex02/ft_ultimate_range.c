/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:20:43 by whwang            #+#    #+#             */
/*   Updated: 2025/02/03 15:14:09 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max, int *idx)
{
	int	*new_arr;

	if (min >= max)
		return (NULL);
	new_arr = (int *)malloc(sizeof(int) * (max - min));
	while (*idx < max - min)
	{
		new_arr[*idx] = min + *idx;
		(*idx)++;
	}
	return (new_arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	temp = ft_range(min, max, &i);
	*range = temp;
	if (temp == NULL)
	{
		if (min >= max)
			return (0);
		else
			return (-1);
	}
	return (i);
}
