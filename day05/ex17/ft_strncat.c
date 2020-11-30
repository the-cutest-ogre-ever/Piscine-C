/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 20:33:26 by ijose             #+#    #+#             */
/*   Updated: 2020/03/10 20:44:46 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	while (dest[i] != '\0')
		i++;
	while (counter < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		counter++;
	}
	dest[i + j] = '\0';
	return (dest);
}
