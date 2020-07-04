/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:22:09 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/04 19:23:30 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "func.h"

void	rush(int x, int y)
{
	int col;
	int row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 | row == y - 1) && (col == 0 | col == x - 1))
				ft_putchar('o');
			else if ((row == 0 | row == y - 1) && (col != 0 | col != x - 1))
				ft_putchar('-');
			else if ((row != 0 | row != y - 1) && (col == 0 | col == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
