/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:38:07 by whwang            #+#    #+#             */
/*   Updated: 2025/02/12 16:14:26 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nbr);
int		ft_strcmp(char *s1, char *s2);

int	ft_atoi(char *str)
{
	int	i;
	int	temp;
	int	sign;

	i = 0;
	temp = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp *= 10;
		temp += str[i] - '0';
		i++;
	}
	return (temp * sign);
}

void	ft_cal(char **av, int (*f)(char*), int oup)
{
	if (ft_strcmp(av[2], "+"))
		oup = f(av[1]) + f(av[3]);
	else if (ft_strcmp(av[2], "-"))
		oup = f(av[1]) - f(av[3]);
	else if (ft_strcmp(av[2], "*"))
		oup = f(av[1]) * f(av[3]);
	else if (ft_strcmp(av[2], "/"))
	{
		if (ft_strcmp(av[3], "0"))
		{
			write(1, "Stop : division by zero\n", 24);
			return ;
		}
		oup = f(av[1]) / f(av[3]);
	}
	else if (ft_strcmp(av[2], "%"))
	{
		if (ft_strcmp(av[3], "0"))
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
		oup = f(av[1]) % f(av[3]);
	}
	ft_print(oup);
}

int	main(int ac, char **av)
{
	int	oup;

	oup = 0;
	if (ac == 4)
	{
		ft_cal(av, ft_atoi, oup);
		return (0);
	}
	return (0);
}
