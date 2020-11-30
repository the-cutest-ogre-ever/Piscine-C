/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:28:33 by ijose             #+#    #+#             */
/*   Updated: 2020/03/11 18:05:30 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	n = 1;
	if (argc > 1)
	{
		while (n < argc)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				ft_putchar(argv[n][i]);
				i++;
			}
			n++;
			ft_putchar('\n');
		}
	}
	return (0);
}
