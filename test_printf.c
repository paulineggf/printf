/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:18:30 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/23 15:30:49 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int				i;
	unsigned int	i2;

	i = -4;
	i2 = 11;
	printf("%-10-.5dHello%d %-0s", 25, "coucou");
	return (0);
}
