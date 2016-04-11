/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parrallel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 14:54:23 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 16:43:01 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_iso	*parallel(t_node *cc)
{
	t_node		*tmp;
	t_iso		*new;

	tmp = cc;
	new = NULL;
	while (cc)
	{
		new = insert_node_iso(new, cc);
		cc = cc->next;
	}
	return (new);
}
