/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:11:17 by ycardona          #+#    #+#             */
/*   Updated: 2022/11/02 22:41:00 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_isfree(char **mat, int c, int coord[4], char obstacle)
{
	int	k;
	int	i;
	int	j;

	i = coord[0];
	j = coord[1];
	if (c + i >= coord[2] || c + j >= coord[3])
		return (0);
	k = 0;
	while (k <= c)
	{
		if (mat[i + c - k][j + c] == obstacle
			|| mat[i + c][j + c - k] == obstacle)
			return (0);
		k++;
	}
	return (1);
}

int	*ft_coord_max(void)
{
	int		*coord_max;

	coord_max = malloc(sizeof(int) * 3);
	if (coord_max == NULL)
	{
		write(2, "error allocating memory", 23);
		return (0);
	}
	return (coord_max);
}

void	ft_set_coord(int y, int x, int *coord)
{
	coord[2] = y;
	coord[3] = x;
	coord[0] = -1;
}

int	*ft_draw_square(char **mat, int y, int x, char chars[3])
{
	int		coord[4];
	int		*coord_max;
	int		c;

	ft_set_coord(y, x, coord);
	coord_max = ft_coord_max();
	coord_max[2] = 0;
	while (++coord[0] < y)
	{
		coord[1] = -1;
		while (++coord[1] < x)
		{
			c = 0;
			while (ft_isfree(mat, c, coord, chars[1]))
				c++;
			if (c > coord_max[2])
			{
				coord_max[2] = c;
				coord_max[0] = coord[0];
				coord_max[1] = coord[1];
			}
		}
	}
	return (coord_max);
}
