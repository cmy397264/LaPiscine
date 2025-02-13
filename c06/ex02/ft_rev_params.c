/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:02:45 by whwang            #+#    #+#             */
/*   Updated: 2025/01/29 17:09:54 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		while (*argv[argc - 1])
		{
			write(1, argv[argc - 1], 1);
			argv[argc - 1]++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
