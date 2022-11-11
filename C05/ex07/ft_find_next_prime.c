/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:43:04 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/29 17:41:21 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

/* int	main(void)
{
	printf("%d", ft_find_next_prime(2147483600));
} */