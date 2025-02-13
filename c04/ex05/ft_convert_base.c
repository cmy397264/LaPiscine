/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:35:33 by whwang            #+#    #+#             */
/*   Updated: 2025/01/31 09:07:02 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	cal_base(char *str, int len, char *base, int idx)
{
	int				j;
	int				flag;
	unsigned int	temp;

	temp = 0;
	while (str[idx])
	{
		j = 0;
		flag = 1;
		while (j < len)
		{
			if (str[idx] == base[j])
			{
				temp *= len;
				temp += j;
				flag = 0;
				break ;
			}
			j++;
		}
		if (flag)
			break ;
		idx++;
	}
	return (temp);
}

void	check_sign(char *str, int *sign, int *idx)
{
	while (str[*idx] == '+' || str[*idx] == '-')
	{
		if (str[*idx] == '-')
			*sign *= -1;
		++*idx;
	}
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
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

int	ft_atoi_base(char *str, char *base)
{
	int				base_len;
	int				sign;
	int				i;
	unsigned int	temp;

	base_len = check_base(base);
	sign = 1;
	i = 0;
	temp = 0;
	if (base_len == 0)
	{
		return (0);
	}
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	check_sign(str, &sign, &i);
	temp = cal_base(str, base_len, base, i);
	return (temp * sign);
}
