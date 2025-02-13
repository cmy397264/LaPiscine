/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:50:39 by whwang            #+#    #+#             */
/*   Updated: 2025/01/30 11:23:15 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*new_arr;

	if (min >= max)
		return (NULL);
	i = 0;
	new_arr = (int *)malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		new_arr[i] = min + i;
		i++;
	}
	return (new_arr);
}
