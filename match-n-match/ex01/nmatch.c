/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:00:59 by ijose             #+#    #+#             */
/*   Updated: 2020/03/15 15:59:40 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0')
	{
		if ((*s1 == *s2) && (*s1 != '*'))
			return (nmatch(s1 + 1, s2 + 1));
		if (*s2 == '*')
			return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	}
	else
	{
		if (*s2 == '*')
			return (nmatch(s1, s2 + 1));
		if (*s2 == '\0')
			return (1);
	}
	return (0);
}
