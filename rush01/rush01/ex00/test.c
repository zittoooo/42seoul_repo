/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashidi <pjrashidi@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:01:47 by prashidi          #+#    #+#             */
/*   Updated: 2020/07/12 21:16:55 by prashidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_args(int views[16], char *str);
void	generate_grid(int views[16]);
int		except(int argc, char argv[]);

int		main(int argc, char *argv[])
{
	int	views[16];

	if (except(argc, argv[1]) == 0)
	{
		write(1, "Error \n", 7);
		return (0);
	}
	convert_args(views, argv[1]);
	generate_grid(views);
	return (0);
}
