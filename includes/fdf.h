/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 13:01:26 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 17:39:08 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include <mlx.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <fcntl.h>
//#include <sys/type.h>
#include <math.h>
#include <stdio.h>
#include "../libft/libft.h"
#include "struct.h"
#define CTE1 0.5
#define CTE2 0.75

#define X_SIZE 1800
#define Y_SIZE 1440

t_node			*get_map(char *file);
t_node		*init_node(void);
t_node		*new_node(int x, int y, int z);
t_node		*insert_node(t_node *list, int x, int y, int z);
t_iso		*init_node_iso(void);
t_iso		*new_node_iso(t_node *list);
t_iso		*insert_node_iso(t_iso *list, t_node *cc);
t_iso		*parallel(t_node *cc);
void		draw_lines(t_mlx *new, t_iso *start, t_iso *end);
t_mlx		*init_mlx(void);
char		*get_plan(char *line);
t_map		plan_size(char *map);

#endif
