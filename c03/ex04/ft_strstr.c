/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:28:04 by whwang            #+#    #+#             */
/*   Updated: 2025/01/28 23:15:52 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_compare(char *str, char *to_find, int i, int t_size)
{
	int	j;

	j = 0;
	while (j < t_size)
	{
		if (str[i + j] != to_find[j])
		{
			return (0);
		}
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s_size;
	int	t_size;

	i = 0;
	s_size = ft_strlen(str);
	t_size = ft_strlen(to_find);
	if (t_size == 0)
		return (str);
	while (i < s_size - t_size + 1)
	{
		if (ft_compare(str, to_find, i, t_size))
			return (&str[i]);
		i++;
	}
	return (0);
}
