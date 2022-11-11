/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:33:12 by sobahram          #+#    #+#             */
/*   Updated: 2022/10/30 09:43:47 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

#ifndef FT_IS_NUMERIC
# define FT_IS_NUMERIC
int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
#endif