/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:12:23 by gobranda          #+#    #+#             */
/*   Updated: 2022/10/18 12:39:38 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/
\

#include <unistd.h>

void	vertical(int a);
void	ft_putchar(char x);
void	horizontal(int a, char x, char y);

void	rush(int a, int b)
{
	if (! (a <= 0 || b <= 0))
	{
		horizontal(a, '/', '\\');
		while (b > 2)
		{
			vertical(a);
			b--;
		}
		if (b > 1)
		{
			horizontal(a, '\\', '/');
		}
	}
	else
	{
		write(1, "Only numbers bigger than 0 allowed", 34);
	}
}

void	horizontal(int a, char x, char y)
{
	ft_putchar(x);
	while (a > 2)
	{
		ft_putchar('*');
		a--;
	}
	if (a > 1)
	{
		ft_putchar(y);
	}
	ft_putchar('\n');
}

void	vertical(int a)
{
	ft_putchar('*');
	while (a > 2)
	{
		ft_putchar(' ');
		a--;
	}
	if (a > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}
