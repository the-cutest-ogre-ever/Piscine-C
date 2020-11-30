/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr_funcs.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:21:17 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 14:02:37 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_FUNCS_H
# define EVAL_EXPR_FUNCS_H

void	ft_putnbr(int nbr);
void	ft_putchar(char ch);
int		ft_strlen(char *str);
int		ft_do_op(int num1, int num2, char op);
int		extract_num(char **str);
int		extract_expr(char **str);
int		process_expr(char **str);
char	*remove_extra_syms(char *str);
int		eval_expr(char *str);

#endif
