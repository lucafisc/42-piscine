/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:07:39 by ycardona          #+#    #+#             */
/*   Updated: 2022/11/02 23:31:55 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_ini_matrix(char *buff);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_print_matrix(char **mat, int y, int x);
void	ft_getchars(char *buff, char chars[3]);
int		ft_isdigit(char c);
int		*ft_draw_square(char **mat, int y, int x, char chars[3]);
void	ft_set_max(char **mat, int *coord_max, char full);
int		ft_is_map_valid(char *buff);
int		ft_check_chars(char *chars, int y, int x);
int		ft_str_is_printable(char *str);

#endif
