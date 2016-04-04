/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 19:43:36 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/29 17:23:57 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

int main(int ac, char **av)
{
	void	*mlx;
	void	*win;
	int		fd;
	int		**plan;
	int		i;

	i = 0;
/*	mlx = mlx_init();
	win = mlx_new_window(mlx, 1920, 1080, "42");
	affine(mlx, win, 300, 8, 100, 250);
	affine(mlx, win, 100, 250, 400, 50);
	affine(mlx, win, 400, 50, 300, 500);
	affine(mlx, win, 298, 500, 300, 8);*/
	fd = open(av[1], O_RDONLY);
	plan = read_map(fd);
	while (plan[0][i] != 4)
	{
		printf("couille molle");
		ft_putnbr(plan[0][i]);
		i++;
	}
	mlx_loop(mlx);
	return(0);
}
