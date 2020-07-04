/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:22:09 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/04 16:30:24 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "func.h"

void	rush(int y, int x)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 | i == x - 1) && (j == 0 | j == y - 1))
				ft_putchar('o');
			else if ((j == 0 | j == y - 1) && (i != 0 | i != x - 1))
				ft_putchar('-');
			else if ((j != 0 | j != y - 1) && (i == 0 | i == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
