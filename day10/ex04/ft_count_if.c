/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:15:01 by ijose             #+#    #+#             */
/*   Updated: 2020/08/03 14:17:18 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int counter;
	int index;

	counter = 0;
	index = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) == 1)
			counter++;
		index++;
	}
	return (counter);
}
