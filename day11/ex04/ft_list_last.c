/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:23:26 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 18:09:10 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *temp_heap;

	if (!begin_list)
		return (NULL);
	temp_heap = begin_list;
	while (temp_heap->next)
		temp_heap = temp_heap->next;
	return (temp_heap);
}
