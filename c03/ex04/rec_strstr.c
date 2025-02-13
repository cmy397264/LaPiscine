/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:51:35 by whwang            #+#    #+#             */
/*   Updated: 2025/01/29 11:15:47 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// i = str의 위치, j = 반복한 재귀 횟수

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*recur_find(int i, int j, char *str, char *to_find)
{
	if (i >= ft_strlen(str))
		return (0);
	if (j == ft_strlen(to_find) - 1 && j != 0)
	{
		return (&str[i - j]);
	}
	else {
		printf("%d : %c ? %c, i : %d / j : %d \n", i, str[i], to_find[j], i, j);
		if (str[i + j] != to_find[j])
			return (recur_find(i + 1, 0, str, to_find));
		else
			return (recur_find(i + 1, j + 1, str, to_find));
	}
}

int	main(void)
{	
	printf("%s\n", recur_find(0, 0, "123456", "35"));
	printf("%s\n", recur_find(0, 0, "123456", "7"));
	printf("%s\n", recur_find(0, 0, "123456", "67"));
}
