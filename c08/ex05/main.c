/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:33:28 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 21:08:09 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
    t_stock_str	*arr;

    arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc - 1));
    arr = ft_strs_to_tab(argc, argv);
    ft_show_tab(arr);
    return 0;
}

