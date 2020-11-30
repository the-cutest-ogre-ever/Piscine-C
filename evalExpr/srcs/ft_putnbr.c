/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:16:18 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 14:56:30 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/eval_expr_funcs.h"

void	ft_putnbr(int nbr)
{
	int temp;

	if (nbr < 0)
	{
		ft_putchar('-');
		temp = nbr * -1;
	}
	else
		temp = nbr;
	if (temp >= 10)
		ft_putnbr(temp / 10);
	ft_putchar(temp % 10 + '0');
}
