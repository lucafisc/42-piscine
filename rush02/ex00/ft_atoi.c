/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:44:38 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/30 09:45:21 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

#ifndef FT_ATOI
# define FT_ATOI

int	is_numeric(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

int	is_space(char x)
{
	if (x == ' ' || x == '	')
		return (1);
	else
		return (0);
}

int	is_sign(char x)
{
	if (x == '-' || x == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (is_space(str[i]))
	{
		i++;
	}

	if (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	
	while (is_numeric(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
#endif