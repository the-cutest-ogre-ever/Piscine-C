/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:52:04 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 23:16:23 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

void				write_file_st(void)
{
	char			ch;
	int				fd;

	fd = open("NewMap", O_RDWR | O_CREAT, 0777);
	while (read(0, &ch, 1) > 0)
		write(fd, &ch, 1);
	close(fd);
}

void				process_file(char *file)
{
	int				i;
	t_map_params	*map_params;
	t_extreme_point	*extreme_point;
	char			*str;

	map_params = malloc(sizeof(t_map_params));
	if (is_valid(file, map_params) == -1)
	{
		free(map_params);
		write(1, "map error\n", 10);
		return ;
	}
	extreme_point = (t_extreme_point*)malloc(sizeof(t_extreme_point));
	extreme_point->value = 0;
	str = map_to_string(file, map_params);
	i = 0;
	extreme_point = find_extreme_point(str, extreme_point, map_params, i);
	if (extreme_point->value == 0)
		print_without_changes(str, map_params);
	else
		print_with_fullment(str, extreme_point, map_params);
	free(extreme_point);
}
