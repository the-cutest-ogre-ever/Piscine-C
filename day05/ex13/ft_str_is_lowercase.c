/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:37:26 by ijose             #+#    #+#             */
/*   Updated: 2020/03/10 18:39:07 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			if (!(*str >= 'a' && *str <= 'z'))
				return (0);
			++str;
		}
	}
	return (1);
}
