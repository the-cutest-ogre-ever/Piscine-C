/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:09:08 by ijose             #+#    #+#             */
/*   Updated: 2020/03/06 20:06:37 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int count_dig;

	count_dig = 0;
	while (*str != '\0')
	{
		count_dig++;
		str++;
	}
	return (count_dig);
}
