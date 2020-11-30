/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrylock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:14:36 by pfrylock          #+#    #+#             */
/*   Updated: 2020/08/09 21:26:25 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02_utils.h"

void	ft_putnbr(int nb)
{
	char	symb;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	nb = nb % 10;
	symb = nb + 48;
	write(1, &symb, 1);
}
