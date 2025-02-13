/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:35:33 by whwang            #+#    #+#             */
/*   Updated: 2025/01/31 12:08:44 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	cal_base(char *str, int len, char *base, int idx);
int	check_base(char *base);
int	ft_atoi_base(int base_len, char *str, char *base);
void	check_sign(char *str, int *sign, int *idx);

void	recur_print_base(unsigned int nb, unsigned int len, char *base, char *dest)
{
	if (nb >= len)
	{
		recur_print_base(nb / len, len, base, dest + 1);
	}
	write(1, &base[nb % len], 1);
	*dest = base[nb % len];
}

void	ft_putnbr_base(int nbr, int base_len, char *base, char *dest)
{
	if (nbr < 0)
	{
		*dest++ = '-';
		nbr *= -1;
	}
	recur_print_base(nbr, base_len, base, dest);
}

int	find_new_arr_len(int nb, int base_len)
{
	int	count;

	count = 0;
	while (nb)
	{
		count++;
		nb /= base_len;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result_atoi;
	int		base_to_len;
	int		base_from_len;
	int		new_arr_len;
	char	*new_arr;
	
	base_from_len = check_base(base_from);
	base_to_len = check_base(base_to);
	if (!(base_from_len && base_to_len))
		return (0);
	result_atoi = ft_atoi_base(base_from_len, nbr, base_from); 
	
	printf("result of atoi : %d\n", result_atoi);
	
	new_arr_len = find_new_arr_len(result_atoi, base_to_len);
	new_arr = (char *)malloc(sizeof(char) * (new_arr_len + 1));
	ft_putnbr_base(result_atoi, base_to_len, base_to, new_arr);
	write(1, "\n", 1);
	if (*new_arr == '\0')
	{
		free(new_arr);
		return (0);
	}
	return (new_arr);
}
