/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:37:02 by ijose             #+#    #+#             */
/*   Updated: 2020/03/11 16:04:32 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	n = argc - 1;
	if (argc > 1)
	{
		while (n > 0)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				ft_putchar(argv[n][i]);
				i++;
			}
			n--;
			ft_putchar('\n');
		}
	}
	return (0);
}
