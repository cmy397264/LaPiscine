/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:43:08 by whwang            #+#    #+#             */
/*   Updated: 2025/01/25 13:24:21 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	while (str[i] != '\0')
	{
		flag = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			flag = 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			flag = 1;
		if (!flag)
			return (0);
		i++;
	}
	return (1);
}
