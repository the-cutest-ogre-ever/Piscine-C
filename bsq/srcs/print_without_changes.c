/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_without_changes.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:30:35 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 21:19:26 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

void	print_without_changes(char *str, t_map_params *map_params)
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
			write(1, &(str[k]), 1);
			k++;
			j++;
		}
		if (str[k++] == '\n')
			write(1, "\n", 1);
		i++;
	}
}
