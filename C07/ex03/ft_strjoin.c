/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:58:20 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/03 12:14:27 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	get_arr_len(int size, char **strs)
{
	int	space;
	int	i;
	int	j;

	i = 0;
	j = 0;
	space = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			j++;
			space++;
		}
		j = 0;
		i++;
	}
	return (space);
}

int	get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter;
	int		i;
	int		j;
	char	*ptr;

	i = -1;
	j = -1;
	counter = -1;
	if (size <= 0)
		return ("");
	ptr = malloc(sizeof(char)
			* (get_arr_len(size, strs) + get_str_len(sep) * (size - 1) + 1));
	while (++i < size)
	{
		while (strs[i][++j])
			ptr[++counter] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			ptr[++counter] = sep[j];
		j = -1;
	}
	ptr[++counter] = '\0';
	return (ptr);
}

int	main(void)
{
	char *strings[3];
	strings[0] = "aaa";
	strings[1] = "bbb";
	strings[2] = "ccc";
	char **pointer = strings;
	printf("%s", ft_strjoin(3, pointer, "1234"));
}