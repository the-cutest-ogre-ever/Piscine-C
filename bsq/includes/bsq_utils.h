/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:42:19 by ijose             #+#    #+#             */
/*   Updated: 2020/08/12 22:57:42 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_UTILS_H
# define BSQ_UTILS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_map_params
{
	int				height;
	int				length;
	char			empty;
	char			obs;
	char			full;
}					t_map_params;
typedef struct		s_extreme_point
{
	int				x;
	int				y;
	int				value;
}					t_extreme_point;
void				write_file_st(void);
void				process_file(char *file);
void				process_standart(void);
int					is_valid(char *file, t_map_params *map_params);
char				*is_valid_standart(t_map_params *map_params);
char				*map_to_string(char *file, t_map_params *map_params);
t_extreme_point		*find_extreme_point(char *str, t_extreme_point
		*extreme_point, t_map_params *map_params, int i);
void				print_without_changes(char *str, t_map_params *map_params);
void				print_with_fullment(char *str, t_extreme_point
		*extreme_point, t_map_params *map_params);

#endif
