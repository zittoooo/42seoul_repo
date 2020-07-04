/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 17:15:16 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/04 18:54:37 by jiholee          ###   ########.fr       */
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
			if( (row == 0 && col == 0) | (row == 0 && col == x-1))
				ft_putchar('A');
			else if( (row == y-1 && col == 0) | (row == y-1 && col == x-1 ))
				ft_putchar('C');
			else if ((row == 0 | row == y - 1) && (col != 0 | col != x - 1))
				ft_putchar('B');
			else if ((row != 0 | row != y - 1) && (col == 0 | col == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
