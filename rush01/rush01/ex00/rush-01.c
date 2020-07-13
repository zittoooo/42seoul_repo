/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashidi <pjrashidi@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:51:28 by prashidi          #+#    #+#             */
/*   Updated: 2020/07/11 12:05:34 by prashidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main( int argc, char *argv[] )
{
	int 	grid[4][4];
	char	*views;
		
	views = argv[1];
	generate_grid(&grid, &views);
	print_grid(&grid);
}


