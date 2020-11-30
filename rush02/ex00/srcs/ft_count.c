/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrylock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 09:12:10 by pfrylock          #+#    #+#             */
/*   Updated: 2020/08/09 22:43:32 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02_utils.h"

int			get_x(char *buf)
{
	int		i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	return (i);
}

int			get_y(char *buf)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			count++;
		i++;
	}
	return (count);
}
