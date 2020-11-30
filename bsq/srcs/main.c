/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:20:24 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 20:51:49 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_utils.h"

int		main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		write_file_st();
		process_file("NewMap");
		return (0);
	}
	else
	{
		i = 1;
		while (argv[i] != '\0')
		{
			if (i > 1)
				write(1, "\n", 1);
			process_file(argv[i++]);
		}
	}
	return (0);
}
