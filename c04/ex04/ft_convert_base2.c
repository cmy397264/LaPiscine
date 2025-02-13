/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:35:33 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 00:28:52 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur_print_base(unsigned int nb, unsigned int len, char *base)
{
	if (nb >= len)
	{
		recur_print_base(nb / len, len, base);
	}
	write(1, &base[nb % len], 1);
}

unsigned int	check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;	

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	temp;

	temp
	base_len = check_base(base);
	if (base_len == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	recur_print_base(nbr, base_len, base);
}
