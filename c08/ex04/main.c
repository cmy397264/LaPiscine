/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:33:28 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 09:12:29 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
    t_stock_str *arr;
    int i;

    arr = ft_strs_to_tab(argc, argv);
    if (arr != NULL)
    {
        for (i = 1; i < argc; i++)
        {
            printf("Index %d:\n", i);
            printf("  size: %d\n", arr[i].size);
            printf("  str: %s\n", arr[i].str);
            printf("  copy: %s\n", arr[i].copy);
        }
        for (i = 0; i < argc; i++)
        {
            free(arr[i].copy);
        }
        free(arr);
    }
    else
        printf("Memory allocation failed.\n");
    return 0;
}

