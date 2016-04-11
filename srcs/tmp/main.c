/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 19:43:36 by vquesnel          #+#    #+#             */
/*   Updated: 2016/04/07 17:06:25 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

int main(int ac, char **av)
{
	t_mlx	env;

	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 200, 200, "zdp");

	mlx_loop(env.mlx);
	return(0);
}
