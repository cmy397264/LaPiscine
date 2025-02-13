/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:42:10 by whwang            #+#    #+#             */
/*   Updated: 2025/01/29 21:49:08 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *string = "this is a copy";
	char *newstr;

	if ((newstr = strdup(string)) != NULL)
		printf("The new string is: %s\n", newstr);
	return 0;
}
