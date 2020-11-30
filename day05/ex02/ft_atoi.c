/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:44:18 by ijose             #+#    #+#             */
/*   Updated: 2020/03/10 19:40:20 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cycle(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0' && str[index] <= 32)
		++index;
	return (index);
}

int		ft_atoi(char *str)
{
	int num;
	int i;

	num = 0;
	i = cycle(str);
	if (str[i] != '\0')
	{
		if ((str[i] == '-' || str[i] == '+') &&
		str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			if (str[i] == '+')
				return (ft_atoi(++str));
			num = ft_atoi(++str);
			return (num * (-1));
		}
		else if (str[i] != '-' && str[i] != '+')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				num = (num * 10) + (str[i] - '0');
				i++;
			}
		}
	}
	return (num);
}
