/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 19:43:36 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/24 17:10:52 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

int main()
{
	void	*mlx;
	void	*win;



	mlx = mlx_init();
	win = mlx_new_window(mlx, 1920, 1080, "42");
	ft_wire(mlx, win, 500, 500, 700, 500);
	mlx_loop(mlx);
	return(0);
}
