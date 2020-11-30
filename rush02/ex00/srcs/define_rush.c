/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 19:39:11 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 23:00:13 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02_utils.h"

void	define_rush(int counter, char *str, int x, int y)
{
	if ((compare(str, rush00(x, y))) == 0 && counter++)
		ft_putrush(x, y, 0);
	if (compare(str, rush01(x, y)) == 0)
	{
		(counter++ != 0) ? write(1, " || ", 4) : 0;
		ft_putrush(x, y, 1);
	}
	if (compare(str, rush02(x, y)) == 0)
	{
		(counter++ != 0) ? write(1, " || ", 4) : 0;
		ft_putrush(x, y, 2);
	}
	if (compare(str, rush03(x, y)) == 0)
	{
		(counter++ != 0) ? write(1, " || ", 4) : 0;
		ft_putrush(x, y, 3);
	}
	if (compare(str, rush04(x, y)) == 0)
	{
		(counter++ != 0) ? write(1, " || ", 4) : 0;
		ft_putrush(x, y, 4);
	}
	(counter == 0) ? (write(1, "aucune", 6)) : 0;
	write(1, "\n", 1);
}
