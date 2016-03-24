/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wire.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 16:21:22 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/24 17:06:19 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

void	ft_wire(void *mlx, void *window, int x_s, int y_s, int x_e, int y_e )
{
	while (x_s <= x_e)
	{
		while (y_s <= x_s)
		{
			mlx_pixel_put(mlx, window, x_s, y_s, 0xFF00FF);
			y_s++;
		}
		x_s++;
	}
}
