/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_wings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 14:00:13 by kwiessle          #+#    #+#             */
/*   Updated: 2016/05/02 14:00:15 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	left_wing(t_env *env)
{
	int		x;
	int		y;

	x = 148;
	y = 646;
	while (x++ < 383)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	while (y++ < 781)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	x = 148;
	y = 646;
	while (y++ < 781)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	while (x++ < 383)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
}

void	right_wing(t_env *env)
{
	int		x;
	int		y;

	x = 642;
	y = 646;
	while (x++ < 890)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	while (y++ < 781)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	x = 642;
	y = 646;
	while (y++ < 781)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	while (x++ < 890)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
}

void	body(t_env *env)
{
	int		x;
	int		y;

	x = 384;
	y = 592;
	while (x++ <= 640)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	while (y++ <= 831)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	x = 384;
	y = 592;
	while (y++ <= 831)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
	while (x++ <= 640)
		mlx_pixel_put(env->mlx, env->win, x, y, 0xFFFFFF);
}
