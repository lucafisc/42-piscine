/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:13:03 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/01 11:49:29 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	arr = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/* int	main()
{
	int *array;
	int	i;
	i = 0;
	array = ft_range(10, 22);
	while (i < 12)
	{
		printf("%d", array[i]);
		i++;
	}
} */