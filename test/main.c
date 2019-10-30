/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:43:22 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/30 17:13:44 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	test_p();
void	test_c();
void	test_id();
void	test_s();
void	test_u();
void	test_x();

int		main(void)
{
	//test_p();
	test_s();
	test_c();
	test_id();
	test_u();
	test_x();
	return (0);
}
