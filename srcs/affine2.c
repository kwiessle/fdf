/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 13:16:07 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/29 16:12:39 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

void	affine(void *mlx, void *window, int x_s, int y_s, int x_e, int y_e)
{
	double		a;
	double		b;
	double		x;
	double		y;
	double		y2;

	if (x_e < x_s)
		return (affine(mlx, window, x_e, y_e, x_s, y_s));
	x = x_e - x_s;
	if (x == 0)
	{
		if (y_e < y_s)
			return (affine(mlx, window, x_s, y_e, x_e, y_s));
		while (y_s <= y_e)
		{
			mlx_pixel_put(mlx, window, x_s, y_s, 0x800202);
			y_s++;
		}
	}
	y = y_e - y_s;
	a = y / x;
	b = y_s - (a * x_s);
	while (x_s < x_e)
	{
		y2 = (a * x_s +b);
		while (y2 > (a * (x_s + 1) + b))
		{
			mlx_pixel_put(mlx, window, x_s, y2, 0xFFF0FF);
			y2--;
		}
		x_s++;
	}
}
