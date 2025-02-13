/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:50:29 by whwang            #+#    #+#             */
/*   Updated: 2025/01/29 16:15:29 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recur_find_next_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 0;
	while (i < nb)
	{
		if (!(nb % i))
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag)
		return (recur_find_next_prime(nb + 1));
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	return (recur_find_next_prime(nb));
}
