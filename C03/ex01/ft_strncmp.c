/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:19:32 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/25 18:14:27 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 && (*s1 == *s2) && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/* int main(void)
{
	char str1[] = "abc";
	char str2[] = "abc";
	int i = ft_strncmp(str1, str2, 2);
	printf("%d", i);
} */