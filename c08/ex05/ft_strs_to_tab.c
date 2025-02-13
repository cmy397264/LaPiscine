/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:09:52 by whwang            #+#    #+#             */
/*   Updated: 2025/02/10 15:57:01 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	int		i;
	int		len;
	char	*temp;

	i = 0;
	len = ft_strlen(src);
	temp = (char *)malloc(sizeof(char) * (len + 1));
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

void	put_arr(t_stock_str *arr, int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		arr[i].str = av[i];
		arr[i].copy = ft_strcpy(av[i]);
		arr[i].size = ft_strlen(av[i]);
		i++;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	arr[ac].str = 0;
	arr[ac].copy = 0;
	arr[ac].size = 0;
	put_arr(arr, ac, av);
	i = ac;
	while (--i >= 0)
	{
		if (!arr[i].copy)
		{
			i = ac;
			while (i >= 0)
				free(av[i--]);
			free(arr);
			return (0);
		}
	}
	return (arr);
}
