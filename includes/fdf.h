/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 13:01:26 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/24 16:55:56 by kwiessle         ###   ########.fr       */
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


void	ft_wire(void *mlx, void *window, int x_s, int y_s, int x_e, int y_e);



#endif
