/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:04:26 by whwang            #+#    #+#             */
/*   Updated: 2025/01/28 13:45:54 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_sign(char *str, int *n, int *i)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*n *= -1;
		++*i;
	}
}

void	remove_space(char *str, int *idx)
{
	while ((str[*idx] == 32 || (str[*idx] >= 9 && str[*idx] <= 13)))
	{
		++*idx;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_minus;
	int	sum;

	i = 0;
	is_minus = 1;
	sum = 0;
	remove_space(str, &i);
	check_sign(str, &is_minus, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	sum *= is_minus;
	return (sum);
}
