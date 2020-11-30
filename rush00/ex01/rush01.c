/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvivian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:12:44 by tvivian           #+#    #+#             */
/*   Updated: 2020/03/08 20:01:33 by tvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_horizontal(int x, char right, char left, char middle)
{
	int i;

	i = x - 2;
	ft_putchar(left);
	while (i-- > 0)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	draw_vertical(int x)
{
	int i;

	i = x - 2;
	ft_putchar('*');
	while (i-- >= 1)
	{
		ft_putchar(' ');
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		draw_horizontal(x, '\134', '/', '*');
		while (y-- > 2)
		{
			draw_vertical(x);
		}
		if (y >= 1)
			draw_horizontal(x, '/', '\134', '*');
	}
}
