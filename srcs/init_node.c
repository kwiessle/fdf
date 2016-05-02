/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 13:58:14 by kwiessle          #+#    #+#             */
/*   Updated: 2016/05/02 14:51:41 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node		*init_node(void)
{
	t_node	*node;

	if (!(node = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	node->x = 0;
	node->y = 0;
	node->z = 0;
	node->color = 0;
	node->next = NULL;
	return (node);
}

t_node		*new_node(t_coord coord, int color)
{
	t_node	*node;

	if (!(node = init_node()))
		return (NULL);
	node->x = coord.y;
	node->y = coord.x;
	node->z = coord.z;
	node->color = color;
	return (node);
}

t_node		*insert_node(t_node *node, t_node *elem)
{
	t_node	*tmp;

	if (!node)
		return (elem);
	tmp = node;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = elem;
	return (node);
}
