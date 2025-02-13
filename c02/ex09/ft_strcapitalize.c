/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:58:02 by whwang            #+#    #+#             */
/*   Updated: 2025/01/27 15:28:05 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_special(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_cap;

	i = 0;
	is_cap = 1;
	while (str[i])
	{
		if (is_cap && !is_special(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
			is_cap = 0;
		}
		else if (!is_cap)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
			else if (is_special(str[i]))
				is_cap = 1;
		}
		i++;
	}
	return (str);
}
