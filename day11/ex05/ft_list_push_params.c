/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:58:24 by ijose             #+#    #+#             */
/*   Updated: 2020/08/05 15:09:39 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*prev_list;
	int		index;

	if (ac <= 0)
		return (NULL);
	index = 0;
	prev_list = NULL;
	while (index < ac)
	{
		list = ft_create_elem(av[index]);
		list->next = prev_list;
		prev_list = list;
		index++;
	}
	return (list);
}
