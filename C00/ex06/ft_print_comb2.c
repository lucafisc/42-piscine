/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:08:11 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/15 17:22:49 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	loop_nums(int a, int b, int x, int y);
void	write_nums(int a, int b, int x, int y);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = '0';
	b = '0';
	x = '0';
	y = '0';
	loop_nums(a, b, x, y);
}

void	loop_nums(int a, int b, int x, int y)
{
	while (a <= '9')
	{
		x = a;
		while (b <= '9')
		{
			y = b + 1;
			while (x <= '9')
			{
				while (y <= '9')
				{
					if (!(a == x && b == y))
					{
						write_nums(a, b, x, y);
					}
					y++;
				}
				y = '0';
				x++;
			}
			x = a;
			b++;
		}
		b = '0';
		a++;
	}
}

void	write_nums(int a, int b, int x, int y)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (!(a == '9' && b == '8'))
	{
		write(1, ", ", 2);
	}
}
