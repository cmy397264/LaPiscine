/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:28:44 by whwang            #+#    #+#             */
/*   Updated: 2025/02/12 16:56:31 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur_print(unsigned int n)
{
	if (n > 9)
		recur_print(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	ft_print(int nbr)
{
	unsigned int	temp;

	if (nbr < 0)
	{
		write(1, "-", 1);
		temp = -nbr;
	}
	else
		temp = nbr;
	recur_print(temp);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 != 0)
		return (0);
	else
		return (1);
}
