/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:29:43 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 15:57:56 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "	";
	char	charset[] = "\n";

	char **result = ft_split(str, charset);
	int	i;

	i = 0;
	printf("given str : %s str_len : %d\n", str, ft_strlen(str));
	printf("given charset : %s charset_len : %d\n", charset, ft_strlen(charset));
	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	return (0);
}
