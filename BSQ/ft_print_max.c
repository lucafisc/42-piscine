/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:12:49 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/02 22:10:49 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_set_max(char **mat, int *coord_max, char full)
{
	int	i;
	int	j;
	int	c;
	int	k;
	int	l;

	i = coord_max[0];
	j = coord_max[1];
	c = coord_max[2];
	k = 0;
	while (k < c)
	{
		l = 0;
		while (l < c)
		{
			mat[i + k][j + l] = full;
			l++;
		}
		k++;
	}
}
