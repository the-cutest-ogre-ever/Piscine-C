/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 21:12:46 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 23:01:22 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02_utils.h"

int			main(void)
{
	char	*input;
	int		counter;

	counter = 0;
	input = make_str();
	define_rush(counter, input, get_x(input), get_y(input));
	return (0);
}
