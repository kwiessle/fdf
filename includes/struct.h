/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 16:39:29 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 16:39:58 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_node
{
	int				x;
	int				y;
	int				z;
	struct s_node	*next;
}					t_node;

typedef struct		s_iso
{
	double			X;
	double			Y;
	struct s_iso	*next;
}					t_iso;

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
}					t_mlx;

typedef struct		s_map
{
	int				height;
	int				length;
}					t_map;

#endif
