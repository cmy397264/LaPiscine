/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:34:53 by whwang            #+#    #+#             */
/*   Updated: 2025/02/03 16:54:29 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*arr[] = {"hello", "I am"};

	printf("%s", ft_strjoin(1, arr, "3"));
	return (0);
}
