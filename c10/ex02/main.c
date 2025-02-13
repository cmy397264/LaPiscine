/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:36:05 by whwang            #+#    #+#             */
/*   Updated: 2025/02/07 10:07:57 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#define FNAMEMISSING_MSG "File name missing.\n"
#define TOOMANYARGS_MSG "Too many arguments.\n"
#define FNAMEMISSING_LEN 19
#define TOOMANYARGS_LEN 20

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	buf[1024];

	if (argc < 2)
		write(2, FNAMEMISSING_MSG, FNAMEMISSING_LEN);
	else if (argc > 2) 
		write(2, TOOMANYARGS_MSG, TOOMANYARGS_LEN);
	else {
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr(strerror(errno));	
		while (1)
		{
			size = read(fd, buf,1024);
			if (size <= 0)
				break ;
			write(1, buf, size);
		}
		if (close(fd) == -1)
			return (1);
		return (0);
	}
	return (1);
}
