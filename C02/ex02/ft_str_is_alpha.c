/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:36:49 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/24 19:00:39 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h> 

int	ft_str_is_alpha(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
		{
			result = 0;
		}
		str++;
	}
	return (result);
}

 int	main(void)
{
	int i;
	char text[] = "aa7aaa";
	i = ft_str_is_alpha(text);
	printf("%d \n", i);
}
