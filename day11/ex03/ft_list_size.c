/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 13:57:40 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 18:05:28 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*temp_heap;

	counter = 0;
	if (!begin_list)
		return (counter);
	temp_heap = begin_list;
	while (temp_heap)
	{
		temp_heap = temp_heap->next;
		counter++;
	}
	return (counter);
}
