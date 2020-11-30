/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 13:37:43 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 17:50:47 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_heap;

	if (*begin_list)
	{
		new_heap = ft_create_elem(data);
		new_heap->next = *begin_list;
		*begin_list = new_heap;
	}
	else
		*begin_list = ft_create_elem(data);
}
