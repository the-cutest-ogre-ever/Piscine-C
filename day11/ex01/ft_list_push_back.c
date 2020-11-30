/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:13:51 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 17:38:49 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *heap;

	if (begin_list && *begin_list)
	{
		heap = *begin_list;
		while (heap->next)
			heap = heap->next;
		heap->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
