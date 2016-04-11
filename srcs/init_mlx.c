/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 14:08:52 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 17:02:03 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_mlx		*init_mlx(void)
{
	t_mlx	*env;

	if (!(env = (t_mlx *)malloc(sizeof(t_mlx))))
		return (NULL);
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, X_SIZE, Y_SIZE, "fdf");
	if (!env->mlx || !env->win)
		return (NULL);
	return (env);
}
