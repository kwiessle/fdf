/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_node_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 15:26:48 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 17:14:45 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_node		*init_node(void)
{
	t_node	*new;

	if (!(new = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->y = 0;
	new->next = NULL;
	return (new);
}

t_node		*new_node(int x, int y, int z)
{
	t_node	*new;

	if (!(new = init_node()))
		return (NULL);
	new->x = y;
	new->y = x;
	new->z = z;
	return (new);
}

t_node		*insert_node(t_node *list, int x, int y, int z)
{
	t_node		*new;
	t_node		*tmp;

	if (!(new = new_node(x, y, z)))
		return (NULL);
	if (!list)
		return (new);
	tmp = list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (list);
}
