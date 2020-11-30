/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:56:01 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 23:11:48 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

int					min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

void				max(t_extreme_point *point, int val, int i, int j)
{
	if (val > point->value)
	{
		point->value = val;
		point->x = i;
		point->y = j;
	}
}

t_extreme_point		*find_extreme_point(char *str,
		t_extreme_point *extreme_point, t_map_params *map_params,
		int i)
{
	int				m[map_params->height][map_params->length];
	int				k;
	int				j;

	k = 0;
	i = 0;
	while (i < map_params->height)
	{
		j = 0;
		while (j < map_params->length)
		{
			(str[k] == '\n') ? k++ : 0;
			if (str[k] == map_params->obs)
				m[i][j] = 0;
			else if (i == 0 || j == 0)
				m[i][j] = 1;
			else
				m[i][j] = 1 + min(m[i - 1][j - 1], m[i - 1][j], m[i][j - 1]);
			max(extreme_point, m[i][j], i, j);
			j++;
			k++;
		}
		i++;
	}
	return (extreme_point);
}
