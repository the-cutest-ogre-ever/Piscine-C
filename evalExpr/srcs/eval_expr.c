/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:27:42 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 23:08:40 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/eval_expr_funcs.h"

int		extract_num(char **str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	if (((*str)[0] == '-') || ((*str)[0] == '+'))
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		*str = *str + 1;
		num = process_expr(str) - 1;
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (num + sign);
	}
	while (((*str)[0] >= '0') && ((*str)[0] <= '9'))
	{
		num = (num * 10) + ((*str)[0] - '0');
		*str = *str + 1;
	}
	return (num * sign);
}

int		extract_expr(char **str)
{
	int		num1;
	int		num2;
	char	op;

	num1 = extract_num(str);
	while (((*str[0]) == '*') || ((*str[0]) == '/') || ((*str)[0] == '%'))
	{
		op = (*str)[0];
		*str = *str + 1;
		num2 = extract_num(str);
		num1 = ft_do_op(num1, num2, op);
	}
	return (num1);
}

int		process_expr(char **str)
{
	int		num1;
	int		num2;
	char	op;

	num1 = extract_num(str);
	while ((*str)[0] != '\0')
	{
		if ((*str)[0] == ')')
			return (num1);
		op = (*str)[0];
		*str = *str + 1;
		if ((op == '+') || (op == '-'))
		{
			num2 = extract_expr(str);
		}
		else
		{
			num2 = extract_num(str);
		}
		num1 = ft_do_op(num1, num2, op);
	}
	return (num1);
}

char	*remove_extra_syms(char *str)
{
	char	*result_str;
	int		i;
	int		k;

	result_str = (malloc)(sizeof(char) * (ft_strlen(str) + 1));
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ') && (str[i] != '\v') && (str[i] != '\t') &&
				(str[i] != '\f') && (str[i] != '\n'))
		{
			result_str[k] = str[i];
			k++;
		}
		i++;
	}
	result_str[k] = '\0';
	return (result_str);
}

int		eval_expr(char *str)
{
	str = remove_extra_syms(str);
	if (str == '\0')
		return (0);
	return (process_expr(&str));
}
