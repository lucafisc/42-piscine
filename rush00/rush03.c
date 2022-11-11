/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gobranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:12:46 by gobranda          #+#    #+#             */
/*   Updated: 2022/10/16 12:12:49 by gobranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	horizontal(int a);
void	vertical(int a);
void	ft_putchar(char x);

void	rush(int a, int b)
{
	if (! (a <= 0 || b <= 0))
	{
		horizontal(a);
		while (b > 2)
		{
			vertical(a);
			b--;
		}
		if (b > 1)
		{
			horizontal(a);
		}
	}
	else
	{
		write(1, "Only numbers bigger than 0 allowed", 34);
	}
}

void	horizontal(int a)
{
	ft_putchar('A');
	while (a > 2)
	{
		ft_putchar('B');
		a--;
	}
	if (a > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	vertical(int a)
{
	ft_putchar('B');
	while (a > 2)
	{
		ft_putchar(' ');
		a--;
	}
	if (a > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}
