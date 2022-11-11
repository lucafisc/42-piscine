/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:02:56 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/25 18:09:47 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	haystack_l;
	int	needle_l;
	int	last_char;

	i = 0;
	haystack_l = get_length(str);
	needle_l = get_length(to_find);
	last_char = haystack_l - needle_l;
	while (i < last_char)
	{
		if (ft_strncmp(&str[i], to_find, needle_l) == 0)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/* int main(void)
{
	char haystack[] = "Hello, is there anybody in there?";
	char needle[] = "anybody";
	printf("%s\n", ft_strstr(haystack, needle));
} */
