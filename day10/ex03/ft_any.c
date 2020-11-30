/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:04:07 by ijose             #+#    #+#             */
/*   Updated: 2020/08/03 14:13:12 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int index;

	index = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) == 1)
			return (1);
		index++;
	}
	return (0);
}
