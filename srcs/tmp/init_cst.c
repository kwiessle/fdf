/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 14:19:41 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/07 16:53:51 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_dot	*new_struct(void)
{
	t_dot	*new;

	if (!(new = (t_dot *)malloc(sizeof(t_dot))))
		return (NULL);
	new->x = 0;
	new->y = 0;
	return (new);
}

t_dot	*init_cst(t_dot start, t_dot end)
{
	t_dot	*cst;

	cst = new_struct();
	if (end.x == start.x)
		return (cst);
	cst->x = end.y - start.y;
	cst->y = end.x - start.x;
	cst->x = cst->x / cst->y;
	cst->y = start.y - (cst->x * start.x);
	return (cst);
}

/*

int		main()
{
	t_dot	start;
	t_dot	end;
	t_dot	*cst;

	cst = new_struct();
	printf("struct initialized\n");
	start.x = 12;
	start.y = 20;

	end.x = 13;
	end.y = 20;

	cst = init_cst(start, end);
	printf("cst realoded\n");
	printf("%f\n", cst->x);
	printf("%f\n", cst->y);
	return (0);
}*/
