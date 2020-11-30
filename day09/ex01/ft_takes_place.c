/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 16:49:29 by ijose             #+#    #+#             */
/*   Updated: 2020/03/12 17:16:54 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 12 + 1);
	else if (hour == 12)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, hour - 12 + 1);
	else if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", hour, hour + 1);
	else if (hour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", hour - 12, hour + 1 - 12);
	else if (hour == 24)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour - 12, hour - 24 + 1);
	else
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour + 12, hour + 1);
}
