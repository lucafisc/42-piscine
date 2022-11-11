/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:25:03 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/01 11:49:04 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*copy;

	i = 0;
	l = get_length(src) + 1;
	copy = malloc(sizeof(char) * l);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* int main(void)
{
	char string[] = "Hello";
	char *copy = ft_strdup(string);
	printf("%s\n", copy);
} */