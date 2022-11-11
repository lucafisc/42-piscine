/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:50:04 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/21 20:35:45 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	result;

	result = 1;
	if (*str == '\0')
	{
		result = 1;
	}
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
		{
			result = 0;
		}
		str++;
	}
	return (result);
}

/*
int main(void)
{
	int i;
	char my_string[] = "99707650451l46713";
	i = ft_str_is_numeric(my_string);
	printf("%d \n", i);
}
*/