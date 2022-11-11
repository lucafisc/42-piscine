/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_str.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobahram <sobahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:29:45 by sobahram          #+#    #+#             */
/*   Updated: 2022/10/29 20:11:02 by sobahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

#ifndef FT_DISPLAY_STR
#define FT_DISPLAY_STR
void	ft_display_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
#endif
