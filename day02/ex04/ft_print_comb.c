/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:49:42 by ijose             #+#    #+#             */
/*   Updated: 2020/03/05 11:23:17 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char num_1;
	char num_2;
	char num_3;

	num_1 = '0' - 1;
	while (++num_1 <= '9')
	{
		num_2 = num_1;
		while (++num_2 <= '9')
		{
			num_3 = num_2;
			while (++num_3 <= '9')
			{
				ft_putchar(num_1);
				ft_putchar(num_2);
				ft_putchar(num_3);
				if (num_1 != '7' || num_2 != '8' || num_3 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
