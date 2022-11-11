/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:49:46 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/01 11:50:27 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	ptr = malloc(sizeof(int) * len);
	while (i < len)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (len);
}

/* int main()
{
	int x[100];
	int *ptr = x;
	int **array = &ptr;
	int i;
	int start;
	int end;
	start = 90;
	end = 99;
	i = 0;
	printf("%d\n",ft_ultimate_range(array, start, end));
	while (i < end - start)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
} */