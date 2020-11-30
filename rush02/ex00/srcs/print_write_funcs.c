/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_write_funcs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 21:18:30 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 22:49:32 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02_utils.h"

char		*make_str(void)
{
	char	buf;
	char	*str;
	int		len;
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = NULL;
	len = 0;
	while (read(0, &buf, 1) > 0)
	{
		ft_list_push_back(&tmp, buf);
		len++;
	}
	str = (char *)malloc(sizeof(*str) * (len + 1));
	while (tmp)
	{
		str[i++] = tmp->data;
		tmp = tmp->next;
	}
	str[i] = '\0';
	return (str);
}

void		ft_putrush(int x, int y, int rush)
{
	write(1, "[rush-0", 7);
	ft_putnbr(rush);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
}
