/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_map_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:22:07 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/02 23:26:32 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_y(int i, char *buff)
{
	int	y;
	int	j;

	j = 0;
	y = 0;
	while (j <= i)
	{
		if (!ft_isdigit(buff[j]))
			return (0);
		y = y * 10 + (buff[j] - 48);
		j++;
	}
	return (y);
}

int	get_x(int i, char *buff)
{
	int	x;

	x = 0;
	while (buff[i] != '\n')
	{
		i++;
		x++;
	}
	return (x);
}

void	ft_ini_chars(char *buff, char *chars, int i)
{
	chars[0] = buff[i];
	chars[1] = buff[i - 1];
	chars[2] = buff[i - 2];
}

int	ft_check_first_line(char *buff)
{
	int	i;

	i = 0;
	while (buff[i + 1] != '\n')
		i++;
	if (i < 3)
		return (0);
	return (i);
}

int	ft_is_map_valid(char *buff)
{
	int		i;
	int		j;
	int		y;
	int		x;
	char	chars[3];

	if (ft_check_first_line(buff) == 0)
		return (0);
	i = ft_check_first_line(buff);
	ft_ini_chars(buff, chars, i);
	y = get_y(i - 3, buff);
	x = get_x(i + 2, buff);
	if (ft_check_chars(chars, y, x) == 0)
		return (0);
	j = -1;
	while (++j < (x + 1) * y)
	{
		if ((buff[i + j + 2] != chars[1] && buff[i + j + 2] != chars[2]
				&& (j + 1) % (x + 1) != 0)
			|| (buff[i + j + 2] == '\n' && (j + 1) % (x + 1) != 0))
			return (0);
	}
	if (buff[i + j + 2])
		return (0);
	return (1);
}
