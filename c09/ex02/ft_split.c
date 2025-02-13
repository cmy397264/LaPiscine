/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:47:03 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 16:18:41 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_seperator(char c, char *sep)
{
	int	i;

	if (!sep)
		return (0);
	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *sep, int str_len)
{
	int	i;
	int	count;
	int	is_word;

	i = 0;
	count = 0;
	is_word = 1;
	while (i < str_len)
	{
		if (is_word && !is_seperator(str[i], sep))
		{
			is_word = 0;
			count++;
		}
		else if (is_seperator(str[i], sep))
			is_word = 1;
		i++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*get_word(char *str, char *sep, int idx, int str_len)
{
	int		i;
	int		len;
	char	*temp;

	len = 0;
	while (idx + len < str_len && !is_seperator(str[idx + len], sep))
		len++;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		temp[i] = str[idx + i];
		i++;
	}
	temp[len] = '\0';
	return (temp);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		str_len;
	int		wc;
	char	**arr;

	str_len = ft_strlen(str);
	wc = count_word(str, charset, str_len);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	arr[wc] = (char *)0;
	i = 0;
	j = 0;
	while (i < wc)
	{
		while (is_seperator(str[j], charset) && j < str_len)
			j++;
		arr[i] = get_word(str, charset, j, str_len);
		while (!is_seperator(str[j], charset) && j < str_len)
			j++;
		i++;
	}
	return (arr);
}
