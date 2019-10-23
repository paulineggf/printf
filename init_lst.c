/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:40:21 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/23 15:31:16 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_struct(t_opt **new)
{
	(*new)->type = 0;
	(*new)->tiret = 0;
	(*new)->zero = 0;
	(*new)->point = 0;
	(*new)->wildcard = 0;
	(*new)->nbr = 0;
	(*new)->next = NULL;
}

t_opt	*cpy_string(const char *str, int *i)
{
	t_opt	*new;


	while (str[*i] && str[*i] != '%')
		(*i)++;
	if (*i == 0)
		return (NULL);
	if (!(new = malloc(sizeof(t_opt))))
		return (NULL);
	new->str = ft_strndup(str, *i);
	init_struct(&new);
	return (new);
}

t_opt	*cpy_opt(const char *str, int *i)
{
	t_opt	*new;

	if (!(new = malloc(sizeof(t_opt))))
		return (NULL);
	init_struct(&new);
	new->str = NULL;
	while (str[*i] && ft_charset(str[*i], "cspdiuxX") == -1)
	{
		if (str[*i] == '0' && *i == 0)
			new->zero = ft_atoi(str, i);
		else if (str[*i] == '-' && ft_charset(str[(*i) + 1], "0123456789") >= 0)
			new->tiret = ft_atoi(str, i);
		else if (str[*i] == '.')
			new->point = ft_atoi(str, i);
		else if (str[*i] == '*')
			new->wildcard = 1;
		else if (ft_charset(str[*i], "123456789") >= 0 && str[*i - 1] == '%')
		{
			(*i)--;
			new->nbr = ft_atoi(str, i);
		}
		else if (str[(*i)++] == '%')
		{
			new->str = ft_strdup("%%");
			return (new);
		}
	}
	new->type = str[*i];
	return (new);
}

t_opt	*init_lst(const char *str)
{
	t_opt	*opt;
	int		i;

	i = 0;
	opt = NULL;
	ft_lstadd_back(&opt, cpy_string(&str[i], &i));
	if (str[i] == '%')
	{
		i++;
		ft_lstadd_back(&opt, cpy_opt(str, &i));
	}
	return (opt);
}
