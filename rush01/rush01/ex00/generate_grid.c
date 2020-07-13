/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashidi <pjrashidi@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:06:54 by prashidi          #+#    #+#             */
/*   Updated: 2020/07/12 22:20:07 by prashidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_grid(int grid[4][4], int *views);
void	print_grid(int grid[4][4]);
void	create_rows(int rows[24][4]);
int		g_grid[4][4];
int		g_rows[24][4];

void	set_grid_from_rowset(int rowset[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		g_grid[i][0] = g_rows[rowset[i]][0];
		g_grid[i][1] = g_rows[rowset[i]][1];
		g_grid[i][2] = g_rows[rowset[i]][2];
		g_grid[i][3] = g_rows[rowset[i]][3];
		i++;
	}
}

void	recurse(int i, int rowset[4], int *foundptr, int views[16])
{
	int j;

	j = 0;
	while (j < 24 && *foundptr == 0)
	{
		rowset[i] = j;
		if (i == 3 && *foundptr == 0)
		{
			set_grid_from_rowset(rowset);
			if (check_grid(g_grid, views))
				*foundptr = 1;
		}
		else if (*foundptr == 0)
			recurse(i + 1, rowset, foundptr, views);
		j++;
	}
}

int		iterate_rowsets(int views[16])
{
	int	rowset[4];
	int found;
	int *foundptr;
	int i;

	i = 0;
	found = 0;
	foundptr = &found;
	recurse(0, rowset, foundptr, views);
	return (found);
}

int		generate_grid(int views[16])
{
	create_rows(g_rows);
	if (iterate_rowsets(views))
	{
		print_grid(g_grid);
		return (1);
	}
	write(1, "Error \n", 7);
	return (0);
}
