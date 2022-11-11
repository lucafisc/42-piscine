/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ini_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:05:21 by ycardona          #+#    #+#             */
/*   Updated: 2022/11/02 23:23:53 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_asign_buff(char *buff, char **ptr_mat, int y, int x)
{
	int	j;
	int	k;
	int	i;

	i = 0;
	while (buff[i] != '\n')
		i++;
	i++;
	k = 0;
	while (k < y)
	{
		j = 0;
		while (j < x)
		{
			ptr_mat[k][j] = buff[i];
			i++;
			j++;
		}
		k++;
		i++;
	}
}

int	ft_gety(char *buff)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	y = 0;
	while (buff[i + 4] != '\n')
		i++;
	j = 0;
	while (j <= i)
	{
		if (!ft_isdigit(buff[j]))
			ft_putstr("Invalid number of lines");
		y = y * 10 + (buff[j] - 48);
		j++;
	}
	return (y);
}

int	ft_getx(char *buff)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (buff[i - 1] != '\n')
		i++;
	while (buff[i + x] != '\n')
		x++;
	return (x);
}

char	**ft_malloc(int y, int x)
{
	char	**mat;
	int		k;

	mat = malloc(sizeof(char *) * y);
	if (mat == NULL)
	{
		write(2, "error allocating memory", 23);
		return (0);
	}
	k = 0;
	while (k < y)
	{
		mat[k] = malloc(sizeof(char) * x);
		if (mat[k] == NULL)
		{
			write(2, "error allocating memory", 23);
			return (0);
		}
		k++;
	}
	return (mat);
}

void	ft_free(char **mat, int y)
{
	int	k;

	k = 0;
	while (k < y)
	{
		free(mat[k]);
		k++;
	}
	free(mat);
}

void	ft_ini_matrix(char *buff)
{
	char	chars[3];
	int		*coord_max;
	char	**mat;
	int		y;
	int		x;

	if (ft_is_map_valid(buff) == 0)
		write(2, "map error", 9);
	else
	{
		y = ft_gety(buff);
		x = ft_getx(buff);
		mat = ft_malloc(y, x);
		if (mat != NULL)
		{
			ft_asign_buff(buff, mat, y, x);
			ft_getchars(buff, chars);
			coord_max = ft_draw_square(mat, y, x, chars);
			ft_set_max(mat, coord_max, chars[2]);
			ft_print_matrix(mat, y, x);
			ft_free(mat, y);
		}
	}
}
