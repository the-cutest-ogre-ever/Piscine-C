/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:22:27 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 22:39:23 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02_utils.h"

char	*rush00(int x, int y)
{
	char	*out;
	int		h;
	int		l;
	int		i;

	i = 0;
	h = 1;
	out = malloc(sizeof(char) * (y * (x + 1) + 1));
	while (h <= y)
	{
		l = 1;
		while (l <= x)
		{
			(((h == 1) || (h == y)) && ((l == x) || (l == 1))) ?
				out[i++] = 'o' : 0;
			(((h == 1) || (h == y)) && (l > 1) && (l < x)) ? out[i++] = '-' : 0;
			((h > 1) && (h < y) && ((l == 1) || (l == x))) ? out[i++] = '|' : 0;
			((h > 1) && (h < y) && (l > 1) && (l < x)) ? out[i++] = ' ' : 0;
			if (l++ == x)
				out[i++] = '\n';
		}
		h++;
	}
	out[i] = '\0';
	return (out);
}
