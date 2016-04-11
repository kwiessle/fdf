/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 16:19:06 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/29 18:11:35 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../includes/fdf.h"

int		**read_map(int const fd)
{
	char	*line;
	char	**tmp;
	int		**plan;
	int		toi;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (get_next_line(fd, &line) > 0)
	{
		tmp = ft_strsplit(line, ' ');
		while (tmp[i])
		{
			printf("nixamer\n");
			toi = ft_atoi(tmp[i]);
			printf("toi = %d\n", toi);
			plan[j][i] = toi;
			printf("c'est passé\n");
			i++;
		}
		j++;
		i = 0;
	}

	return (plan);
}
