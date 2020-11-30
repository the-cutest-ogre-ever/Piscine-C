/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvivian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 19:20:45 by tvivian           #+#    #+#             */
/*   Updated: 2020/03/08 19:33:36 by tvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_horizontal(int x, char o, char middle)
{
	int i;

	i = x - 2;
	ft_putchar(o);
	while (i-- > 0)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(o);
	ft_putchar('\n');
}

void	draw_vertical(int x)
{
	int i;

	i = x - 2;
	ft_putchar('|');
	while (i-- >= 1)
	{
		ft_putchar(' ');
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		draw_horizontal(x, 'o', '-');
		while (y-- > 2)
		{
			draw_vertical(x);
		}
		if (y >= 1)
			draw_horizontal(x, 'o', '-');
	}
}
