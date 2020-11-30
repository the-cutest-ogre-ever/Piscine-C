/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:02:20 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 16:45:57 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int counter;

	counter = nbr;
	if (begin_list == NULL)
		return (NULL);
	while (begin_list && counter)
	{
		begin_list = begin_list->next;
		counter--;
	}
	if (counter != 0)
		return (NULL);
	return (begin_list);
}
