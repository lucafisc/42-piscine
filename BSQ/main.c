/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:26:40 by ycardona          #+#    #+#             */
/*   Updated: 2022/11/02 22:02:06 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#define BUFF_SIZE 409600

char	*ft_read(char *buff)
{
	char	buf[1];
	int	i;

	i = 0;
	while(read(0, buf, sizeof(buf))>0)
	{
		if (buf[0] == '\n')
		{
			buff[i] = '\0';
			return (buff);
		}
		buff[i] = buf[0];
		i++;
 	}
	return (0); 
}

int	main(int argc, char **argv)
{
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		ret;
	int		i;

	if (argc == 1)
	{
		fd = open(ft_read(buff), O_RDONLY);
		if (fd == -1)
			write(2, "error opening file", 18);
		else
		{
			ret = read(fd, buff, BUFF_SIZE);
			buff[ret] = '\0';
			close(fd);
			ft_ini_matrix(buff);
		}
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			write(2, "error opening file", 18);
		else
		{
			ret = read(fd, buff, BUFF_SIZE);
			buff[ret] = '\0';
			close(fd);
			ft_ini_matrix(buff);
		}
		if (argc > 2)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
