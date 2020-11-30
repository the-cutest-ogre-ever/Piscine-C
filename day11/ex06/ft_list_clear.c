/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:11:47 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 15:51:57 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*first_elem;

	if (!(begin_list || *begin_list))
		return ;
	while (*begin_list)
	{
		first_elem = *begin_list;
		*begin_list = (*begin_list)->next;
		free(first_elem);
	}
	begin_list = NULL;
}
