/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:22 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/29 16:55:36 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (1);
	}
}

/* int main(void)
{
	printf("%d", ft_recursive_power(10, 0));
} */