/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:29:43 by whwang            #+#    #+#             */
/*   Updated: 2025/02/05 22:35:09 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("11", "22"));
	printf("%d\n", ft_strcmp("11", "12"));
	printf("%d\n", ft_strcmp("11", "02"));
	printf("%d\n", ft_strcmp("11", ""));
	printf("%d\n", ft_strcmp("1", "11"));
}
