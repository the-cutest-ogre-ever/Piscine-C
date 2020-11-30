/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_with_fullment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:41:04 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 21:18:38 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

void	print_with_fullment(char *str, t_extreme_point *extreme_point,
		t_map_params *map_params)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < map_params->height)
	{
		j = 0;
		while (j < map_params->length)
		{
			if (i >= (extreme_point->x - extreme_point->value + 1) &&
					i <= extreme_point->x && j <= extreme_point->y && j >=
					(extreme_point->y - extreme_point->value + 1))
				write(1, &map_params->full, 1);
			else
				write(1, &(str[k]), 1);
			k++;
			j++;
		}
		if (str[k++] == '\n')
			write(1, "\n", 1);
		i++;
	}
}
