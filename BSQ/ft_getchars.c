/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:01:58 by ycardona          #+#    #+#             */
/*   Updated: 2022/11/02 23:27:06 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_getchars(char *buff, char chars[3])
{
	int	i;

	i = 0;
	while (buff[i + 1] != '\n')
		i++;
	chars[2] = buff[i];
	i--;
	chars[1] = buff[i];
	i--;
	chars[0] = buff[i];
}
