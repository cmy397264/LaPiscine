/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:00:28 by whwang            #+#    #+#             */
/*   Updated: 2025/01/24 12:05:48 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;

	write(1, "0123456789" + *a, 1);
	write(1, "0123456789" + *b, 1);
}


int main(){
	int a = 3, b = 2;
	ft_ultimate_div_mod(&a, &b);
}
