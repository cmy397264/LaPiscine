/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:34:38 by whwang            #+#    #+#             */
/*   Updated: 2025/01/31 10:02:19 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(int base_len, char *str, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	//ar	*c;
	printf("input : %s\n", "  ---2147483648");
	printf("base = 0123456789\n");
	printf("<output>\n");
	printf("%s", ft_convert_base("---214783648", "0123456789","0123456789abcdef"));

	//*c = ft_convert(" 1024", "01", "01234567");
	//printf("%s", c);
}
