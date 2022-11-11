/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gobranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:12:09 by gobranda          #+#    #+#             */
/*   Updated: 2022/10/16 17:50:01 by gobranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	horizontal(int a, char letter);
void	vertical(int a);
void	ft_putchar(char x);

void	rush(int a, int b)
{
	if (! (a <= 0 || b <= 0))
	{
		horizontal(a, 'o');
		while (b > 2)
		{
			vertical(a);
			b--;
		}
		if (b > 1)
		{
			horizontal(a, 'o');
		}
	}
	else
	{
		write(1, "Only numbers bigger than 0 allowed", 34);
	}
}

void	horizontal(int a, char letter)
{
	ft_putchar(letter);
	while (a > 2)
	{
		ft_putchar('-');
		a--;
	}
	if (a > 1)
	{
		ft_putchar(letter);
	}
	ft_putchar('\n');
}

void	vertical(int a)
{
	ft_putchar('|');
	while (a > 2)
	{
		ft_putchar(' ');
		a--;
	}
	if (a > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}
