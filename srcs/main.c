/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 15:33:14 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 16:42:12 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		main(int ac, char **av)
{
	t_iso	*cc;
	t_iso	*tmp;
	t_mlx	*new;

	new = init_mlx();
	cc = parallel(get_map(av[ac - 1]));
	tmp = cc;
	mlx_pixel_put(new->mlx, new->win, tmp->X, tmp->Y, 0xFF00FF);
	mlx_pixel_put(new->mlx, new->win, tmp->next->X, tmp->next->Y, 0x00FF00);
	while (tmp->next)
	{
		mlx_pixel_put(new->mlx, new->win, tmp->X, tmp->Y, 0x00FF00);
		tmp = tmp->next;
	}
	mlx_loop(new->mlx);
	return (0);
}
