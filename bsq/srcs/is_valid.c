/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:48:48 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 23:17:08 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

int			read_pars(int fd, t_map_params *map_params, char ch)
{
	int		num;

	num = 0;
	while ((read(fd, &ch, 1) > 0) && ch >= '0' && ch <= '9')
		num = num * 10 + (ch - '0');
	if (num <= 0)
		return (-1);
	map_params->height = num;
	(ch > 32 && ch < 127 && ch != '\n') ? (map_params->empty = ch) : 0;
	read(fd, &ch, 1);
	(ch >= 33 && ch <= 126 && ch != '\n') ? (map_params->obs = ch) : 0;
	read(fd, &ch, 1);
	(ch >= 33 && ch <= 126 && ch != '\n') ? (map_params->full = ch) : 0;
	read(fd, &ch, 1);
	if (ch != '\n')
		return (-1);
	read(fd, &ch, 1);
	while ((read(fd, &ch, 1) > 0) && ch != '\0' && ch != '\n')
	{
		if (ch != map_params->empty && ch != map_params->obs)
			return (-1);
		else
			num++;
	}
	return (map_params->length = num - map_params->height + 1);
}

int			is_valid(char *file, t_map_params *map)
{
	int		fd;
	char	ch;
	int		i;
	int		j;

	fd = open(file, O_RDONLY);
	if ((ch = 'a' || 1) && read_pars(fd, map, ch) == -1)
		return (-1);
	read(fd, &ch, 1);
	i = 0;
	while (i++ < (map->height - 1))
	{
		read(fd, &ch, 1);
		j = 0;
		while ((read(fd, &ch, 1) > 0) && ch != '\0' && ch != '\n' &&
				j++ < map->length)
			if (ch != map->empty && ch != map->obs)
				return (-1);
	}
	if (read(fd, &ch, 1) <= 0)
		return (close(fd));
	close(fd);
	return (-1);
}
