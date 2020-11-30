/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 20:42:06 by ijose             #+#    #+#             */
/*   Updated: 2020/03/06 21:14:59 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	temp_char;

	count = 0;
	i = 0;
	if (str)
	{
		while (str[count] != '\0')
		{
			count++;
		}
		while (i < count / 2)
		{
			temp_char = str[i];
			str[i] = str[count - i - 1];
			str[count - i - 1] = temp_char;
			i++;
		}
	}
	return (str);
}
