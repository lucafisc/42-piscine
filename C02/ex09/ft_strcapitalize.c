/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:55:18 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/24 13:44:17 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> */

int	is_caps(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	get_char(char c)
{
	if (is_caps(c))
	{
		c = c + 32;
	}
	else if (is_lowercase(c))
	{
		c = c - 32;
	}
	return (c);
}

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{	
			if (is_lowercase(str[i]))
			{
				str[i] = get_char(str[i]);
			}
		}
		else if (!is_alphanumeric(str[i - 1]) && is_lowercase(str[i]))
		{
			str[i] = get_char(str[i]);
		}
		else if (is_caps(str[i]) && is_alphanumeric(str[i - 1]))
		{
			str[i] = get_char(str[i]);
		}
		i++;
	}
	return (str);
}
/* int	main()
{
	char my_str[] = "Salut, CoMMent tuarante-deux; cinquante+et+un";
	ft_strcapitalize(my_str);
	printf("%s", my_str);
}
 */