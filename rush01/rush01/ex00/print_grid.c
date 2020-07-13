/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhong <hhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:10:05 by hhong             #+#    #+#             */
/*   Updated: 2020/07/12 19:11:06 by hhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_grid(int grid[][4])
{
	int	x;
	int y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			put_char('0' + grid[y][x]);
			if (x == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			x++;
		}
		y++;
	}
}
