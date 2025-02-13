/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   systP.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:34:28 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 18:36:31 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	main(void)
{
	int fd;
	int size;
	char buf[1024];

	fd=open("systP.c", O_RDONLY);
	while (1)
	{
		size = read(fd, buf, 1024);
		if (size <= 0)
			break ;
		write(1, buf, size);
	}
	return (0);
}
