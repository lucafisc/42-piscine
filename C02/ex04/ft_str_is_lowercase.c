/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:29:21 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/21 20:36:29 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int main(void)
{
	int	i;
	char my_string[] = "hello";
	i = ft_str_is_lowercase(my_string);
	printf("%d", i);
}
*/