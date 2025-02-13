/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:36:05 by whwang            #+#    #+#             */
/*   Updated: 2025/02/07 12:23:11 by whwang           ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_readfile(char *argv)
{
	int		fd;
	int		size;
	char	buf[30];

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(strerror(errno));
		return ;
	}
	while (1)
	{
		size = read(fd, buf, 30);
		if (size <= 0)
			break ;
		write(1, buf, size);
	}
	if (close(fd) == -1)
		ft_putstr(strerror(errno));
	return ;
}

void	ft_readinput(void)
{
	char	buf[30];

	while (1)
	{
		write(0, buf, 30);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(2, TOOMANYARGS_MSG, TOOMANYARGS_LEN);
		return (1);
	}
	if (argc == 1 || (argc == 2 && ft_strcmp(argv[1],"-") == 0))
		ft_readinput();
	else 
		ft_readfile(argv[1]);
	return (0);
}
