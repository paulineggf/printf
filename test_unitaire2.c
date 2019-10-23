/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_unitaire2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:22:50 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/23 15:48:56 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int argc, char **argv)
{
	t_opt	*opt;

	(void)argc;
	(void)argv;
	opt = init_lst("-10-.20dHello%.20-10d %-10s");
	while (opt)
	{
		printf("opt->str : %s\n", opt->str);
		printf("opt->type : %c\n", opt->type);
		printf("opt->tiret : %d\n", opt->tiret);
		printf("opt->zero : %d\n", opt->zero);
		printf("opt->point : %d\n",opt->point);
		printf("opt->wildcard : %d\n", opt->wildcard);
		printf("opt->nbr : %d\n", opt->nbr);
		printf("\n");
		opt = opt->next;
	}
	return (0);
}
