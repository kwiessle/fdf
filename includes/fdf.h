/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 13:01:26 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/29 21:26:24 by kwiessle         ###   ########.fr       */
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


void	affine(void *mlx, void *window, int x_s, int y_s, int x_e, int y_e);
int		**read_map(int const fd);

typedef struct s_list t_list;


struct s_list {
	int		x;
	int		y;
	int		z;
	t_list *next;
};

#endif
