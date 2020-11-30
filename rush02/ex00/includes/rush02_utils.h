/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 20:34:44 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 22:59:43 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_UTILS_H
# define RUSH02_UTILS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;
t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
char				*make_str(void);
int					get_x(char *buf);
int					get_y(char *buf);
char				*rush00(int x, int y);
char				*rush01(int x, int y);
char				*rush02(int x, int y);
char				*rush03(int x, int y);
char				*rush04(int x, int y);
void				ft_putrush(int x, int y, int rush);
int					compare(char *str1, char *str2);
void				ft_putnbr(int nb);
void				define_rush(int counter, char *str, int x, int y);

#endif
