/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_one_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 13:57:07 by kwiessle          #+#    #+#             */
/*   Updated: 2016/05/02 13:57:13 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		get_color(t_env *env, t_node *start, t_node *end, t_affine c)
{
	if (env->param->high >= 0)
	{
		if (start->z > end->z)
			mlx_put_pixel_to_image(env, &c, end->color);
		else
			mlx_put_pixel_to_image(env, &c, start->color);
	}
	else
	{
		if (start->z < end->z)
			mlx_put_pixel_to_image(env, &c, end->color);
		else
			mlx_put_pixel_to_image(env, &c, start->color);
	}
}

static void		draw_affine(t_env *env, t_node *start, t_node *end, t_affine c)
{
	c.x = start->x;
	while (c.x < end->x)
	{
		c.y = c.coef * c.x + c.cst;
		if (c.y > c.coef * (c.x + 1) + c.cst)
		{
			while (c.y >= c.coef * (c.x + 1) + c.cst)
			{
				get_color(env, start, end, c);
				c.y--;
			}
		}
		else
		{
			while (c.y <= c.coef * (c.x + 1) + c.cst)
			{
				get_color(env, start, end, c);
				c.y++;
			}
		}
		c.x++;
	}
}

void			check_affine(t_env *env, t_node *start, t_node *end)
{
	t_affine affine;

	if (start->x > end->x)
		return (check_affine(env, end, start));
	affine.coef = (float)(end->y - start->y) / (float)(end->x - start->x);
	affine.cst = start->y - (affine.coef * start->x);
	draw_affine(env, start, end, affine);
}

void			draw_vertical(t_env *env, t_node *start, t_node *end)
{
	t_affine		c;

	c.x = start->x;
	c.y = start->y;
	if (c.y < end->y)
	{
		while (c.y <= end->y)
		{
			mlx_put_pixel_to_image(env, &c, start->color);
			c.y++;
		}
	}
	else if (c.y > end->y)
	{
		while (c.y >= end->y)
		{
			mlx_put_pixel_to_image(env, &c, start->color);
			c.y--;
		}
	}
}
