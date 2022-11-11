/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:58:02 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/29 16:55:54 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 1)
	{
		return (1);
	}
	else if (index > 0)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else if (index == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

/* int main()
{
	printf("%d", ft_fibonacci(19));
	return 0;
} */
