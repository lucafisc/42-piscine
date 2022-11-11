/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:13:57 by lde-ross          #+#    #+#             */
/*   Updated: 2022/10/15 16:48:28 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int x)
{
	char	my_char;

	if (x >= 0)
	{
		my_char = 'P';
	}
	else
	{
		my_char = 'N';
	}
	write(1, &my_char, 1);
}