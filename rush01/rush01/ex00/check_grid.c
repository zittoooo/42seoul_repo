/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhong <hhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 18:41:00 by hhong             #+#    #+#             */
/*   Updated: 2020/07/12 22:03:41 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(int view, int row[4]);
int		check_unique(int row[4]);

int		check_top(int grid[][4], int *views)
{
	int i;
	int	row[4];

	i = 0;
	while (i < 4)
	{
		row[0] = grid[0][i];
		row[1] = grid[1][i];
		row[2] = grid[2][i];
		row[3] = grid[3][i];
		if (check_row(views[i], row) == 0)
			return (0);
		if (check_unique(row) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		check_bottom(int grid[][4], int *views)
{
	int i;
	int	row[4];

	i = 4;
	while (i < 8)
	{
		row[0] = grid[3][i % 4];
		row[1] = grid[2][i % 4];
		row[2] = grid[1][i % 4];
		row[3] = grid[0][i % 4];
		if (check_row(views[i], row) == 0)
			return (0);
		if (check_unique(row) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		check_left(int grid[][4], int *views)
{
	int i;
	int	row[4];

	i = 8;
	while (i < 12)
	{
		row[0] = grid[i % 8][0];
		row[1] = grid[i % 8][1];
		row[2] = grid[i % 8][2];
		row[3] = grid[i % 8][3];
		if (check_row(views[i], row) == 0)
			return (0);
		if (check_unique(row) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		check_right(int grid[][4], int *views)
{
	int i;
	int	row[4];

	i = 12;
	while (i < 16)
	{
		row[0] = grid[i % 12][3];
		row[1] = grid[i % 12][2];
		row[2] = grid[i % 12][1];
		row[3] = grid[i % 12][0];
		if (check_row(views[i], row) == 0)
			return (0);
		if (check_unique(row) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		check_grid(int grid[][4], int *views)
{
	if (check_top(grid, views) == 0)
		return (0);
	if (check_bottom(grid, views) == 0)
		return (0);
	if (check_left(grid, views) == 0)
		return (0);
	if (check_right(grid, views) == 0)
		return (0);
	return (1);
}
