/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobahram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:48:37 by sobahram          #+#    #+#             */
/*   Updated: 2022/10/29 15:51:03 by sobahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRLEN
#define FT_STRLEN
unsigned int	ft_strlen(const char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
#endif
