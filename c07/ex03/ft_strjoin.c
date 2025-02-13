/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:30:42 by whwang            #+#    #+#             */
/*   Updated: 2025/02/03 15:31:42 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *dest, char **src, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (src[i][k])
		{
			dest[j] = src[i][k++];
			j++;
		}
		if (i != size - 1)
		{
			while (*sep)
				dest[j++] = *sep++;
		}
		i++;
	}
	dest[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_len;
	int		new_str_len;
	char	*new_str;

	if (size == 0)
	{
		new_str = (char *)malloc(sizeof(char));
		*new_str = '\0';
	}
	else
	{
		i = 0;
		sep_len = ft_strlen(sep);
		new_str_len = 0;
		while (i < size)
		{
			new_str_len += ft_strlen(strs[i++]);
			if (i != size - 1)
				new_str_len += sep_len;
		}
		new_str = (char *)malloc(sizeof(char) * (new_str_len + 1));
		ft_putstr(new_str, strs, sep, size);
	}
	return (new_str);
}
