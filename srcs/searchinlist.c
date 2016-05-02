/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchinlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 14:00:23 by kwiessle          #+#    #+#             */
/*   Updated: 2016/05/02 14:00:27 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node		*searchinlist(t_node *node, t_param *param)
{
	int		x;
	t_node	*tmp;

	tmp = node;
	x = param->x_max + 1;
	while (x)
	{
		tmp = tmp->next;
		x--;
	}
	return (tmp);
}
