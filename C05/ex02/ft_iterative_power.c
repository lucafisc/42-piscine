/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:38:27 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/29 16:55:12 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/* int	main()
{
	printf("%d", ft_iterative_power(4, -3));
} */