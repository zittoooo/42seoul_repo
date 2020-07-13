/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_rows.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 18:55:47 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/12 18:55:48 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		row_contains_int_before_i(int num, int i, int row[4])
{
	int	j;

	j = 0;
	while (j <= i)
	{
		if (row[j] == num)
			return (1);
		j++;
	}
	return (0);
}

void	reset_forward(int i, int row[4])
{
	int j;

	j = i;
	while (j < 4)
	{
		row[j] = 0;
		j++;
	}
}

void	recurse_options(int i, int row[4], int rows[24][4], int *ptr)
{
	int int_to_add;

	int_to_add = 1;
	reset_forward(i, row);
	while (int_to_add < 5)
	{
		if (row_contains_int_before_i(int_to_add, i, row))
		{
			int_to_add++;
			continue;
		}
		row[i] = int_to_add;
		if (i == 3)
		{
			rows[*ptr][0] = row[0];
			rows[*ptr][1] = row[1];
			rows[*ptr][2] = row[2];
			rows[*ptr][3] = row[3];
			*ptr = *ptr + 1;
			break ;
		}
		else
			recurse_options(i + 1, row, rows, ptr);
	}
}

void	create_rows(int rows[24][4])
{
	int i;
	int	row[4];
	int row_to_copy;
	int *ptr;

	i = 0;
	row_to_copy = 0;
	ptr = &row_to_copy;
	recurse_options(i, row, rows, ptr);
}
