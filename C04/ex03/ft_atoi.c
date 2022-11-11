/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:46:09 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/27 18:57:32 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_space(char x)
{
	if (x == '\n'
		|| x == '\v'
		|| x == '\f'
		|| x == '\r'
		|| x == '\t'
		|| x == ' '
		|| x == '	')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_sign(char x)
{
	if (x == '-' || x == '+')
	{
		return (1);
	}
	else
	{
		return (0);
	}
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
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (is_numeric(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/* int main(void)
{
	int i;
	char my_string[] = "	  ----+--- 1234ab567";
	i = ft_atoi(my_string);
	printf("%d", i);
} */