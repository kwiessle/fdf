/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 13:01:26 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/07 17:01:45 by kwiessle         ###   ########.fr       */
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


int		**read_map(int const fd);

typedef struct s_dot	t_dot;
struct					s_dot
{
	double x;
	double y;
};

typedef struct s_mlx	t_mlx;
struct					s_mlx
{
	void *mlx;
	void *win;
};

void	affine(void *mlx, void *window, t_dot start, t_dot end);

#endif
