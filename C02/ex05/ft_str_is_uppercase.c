/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:50:08 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/21 20:37:11 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
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
	int i;
	char my_string[] = "ABC";
	i = ft_str_is_uppercase(my_string);
	printf("%d", i);
}
*/