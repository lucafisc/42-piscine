/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:10:29 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/02 23:27:53 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_chars(char *chars, int y, int x)
{
	if (chars[0] == chars[1] || chars[0] == chars[2]
		|| chars[1] == chars[2] || !ft_str_is_printable(chars))
		return (0);
	if (y <= 0 || x <= 0)
		return (0);
	return (1);
}
