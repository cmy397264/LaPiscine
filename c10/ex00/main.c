/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:36:05 by whwang            #+#    #+#             */
/*   Updated: 2025/02/07 09:17:09 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define FNAMEMISSING_MSG "File name missing.\n"
#define TOOMANYARGS_MSG "Too many arguments.\n"
#define CANNOTREADF_MSG "Cannot read file.\n"
#define FNAMEMISSING_LEN 19
#define TOOMANYARGS_LEN 20
#define CANNOTREADF_LEN 18

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	buf[1024];

	if (argc < 2)
		write(2, FNAMEMISSING_MSG, FNAMEMISSING_LEN);
	else if (argc > 2) 
		write(2, TOOMANYARGS_MSG, TOOMANYARGS_LEN);
	else if((fd =open(argv[1], O_RDONLY)) == -1)
		write(2, CANNOTREADF_MSG, CANNOTREADF_LEN);
	else
	{
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
