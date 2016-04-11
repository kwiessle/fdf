/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 12:43:40 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/11 17:36:46 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int		is_valid(char *line)
{
	int		i;

	i = 0;
	while (line[i])
	{
		if (!(ft_isdigit(line[i])))
		{
			if (line[i] != '\n' && line[i] != '-' && line[i] != ' ')
				return (1);
		}
		i++;
	}
	return (0);
}

static t_node	*convert_map(t_node *list, char *line)
{
	int				y;
	char			**map;
	static int		x;

	y = 0;
	map = ft_strsplit(line,' ');
	while (map[y])
	{
		list = insert_node(list, x * 8, y * 8, ft_atoi(map[y]) * 8);
		y++;
	}
	x++;
	return (list);
}


t_node		*get_map(char *file)
{
	int			fd;
	char		*line;
	t_node		*new;

	new = NULL;
	if ((fd = open(file, O_RDONLY)))
	{
		while (get_next_line(fd, &line))
		{
			if (is_valid(line) == 1)
				ft_putstr("NTM : Map invalid");
			new = convert_map(new, line);
			free(line);
		}
	}
	else
		ft_putstr("NTM2 : Unable to open the map");
	return (new);
}
