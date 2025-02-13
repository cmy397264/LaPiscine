/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:33:05 by whwang            #+#    #+#             */
/*   Updated: 2025/02/13 10:13:06 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	dir;
	int	temp;

	if (length > 2)
	{
		i = 1;
		temp = f(tab[0], tab[1]);
		dir = 0;
		if (temp > 0)
			dir = 1;
		else if (temp < 0)
			dir = -1;
		while (i < length - 1)
		{
			if (dir == 1 && f(tab[i], tab[i + 1]) < 0)
				return (0);
			if (dir == -1 && f(tab[i], tab[i + 1]) > 0)
				return (0);
			else if (!dir && f(tab[i], tab[i + 1]))
				dir = f(tab[i], tab[i + 1]);
			i++;
		}
	}
	return (1);
}
