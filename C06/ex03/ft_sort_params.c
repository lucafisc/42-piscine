/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:28:44 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/30 11:52:40 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_sort_params(int size, char **words)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < size)
	{
		while (i < size - 1)
		{
			if (ft_strcmp(words[i], words[i + 1]) > 0)
			{
				swap = words[i];
				words[i] = words[i + 1];
				words[i + 1] = swap;
			}
			i++;
		}
		i = 1;
		size--;
	}
	return (words);
}

int	main(int argc, char *argv[])
{
	char	**new_array;
	int		i;

	i = 1;
	if (argc > 1)
	{
		new_array = ft_sort_params(argc, argv);
		while (i < argc)
		{
			ft_putstr(new_array[i]);
			ft_putstr("\n");
			i++;
		}
	}
}
