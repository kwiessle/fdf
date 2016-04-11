/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 13:16:07 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/07 14:14:51 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

void	affine(void *mlx, void *window, t_dot *start, t_dot *end)
{
	t_dot		cons;
	t_dot		cons2;
	double		y2;

	if (start->x < start->y)
		return (affine(mlx, window, *end, *start));
	cons2.x = start->x - start->y;
	if (cons2.x == 0)
	{
		if (end->y < start->y)
			ft_swap(&end->y, &start->y);
		while (start->y <= end->y)
		{
			mlx_pixel_put(mlx, window, start->x, start->y, 0x800202);
			start->y++;
			printf("%f\n", start->y);
		}
	}
	cons2.y = end->y - start->y;
	cons.x = cons2.y / cons2.x;
	cons.y = (start->y) - (cons.x * start->x);
	while (start->x < end->x)
	{
		y2 = (cons.x * start->x + cons.y);
		while (y2 > (cons.x * (start->x + 1) + cons.y))
		{
			mlx_pixel_put(mlx, window, start->x, y2, 0xFFF0FF);
			y2--;
		}
		start->x++;
	}
}
