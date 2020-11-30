/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:39:42 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 22:42:43 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

char		*map_to_string(char *file, t_map_params *map_params)
{
	char	*str;
	int		fd;
	char	ch;

	fd = open(file, O_RDONLY);
	while (read(fd, &ch, 1) && ch != '\n')
		ch = 'a';
	str = malloc(sizeof(char) * (map_params->height *
				(map_params->length + 1) + 1));
	read(fd, str, (map_params->height * (map_params->length + 1) + 1))
;
	close(fd);
	return (str);
}
