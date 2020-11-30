/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 23:20:02 by ijose             #+#    #+#             */
/*   Updated: 2020/08/07 23:23:56 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	btree_level_count(t_btree *root)
{
	int	counter;

	counter = 0;
	if (!root)
		return (0);
	if (root->left)
		counter = max(counter, btree_level_count(root->left));
	if (root->right)
		counter = max(counter, btree_level_count(root->right));
	return (counter + 1);
}
