/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:00:57 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/12 19:00:59 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		one_to_four(char c)
{
	if (c >= '1' && c <= '4')
		return (1);
	else
		return (0);
}

int		except(int argc, char argv[])
{
	int i;

	i = 0;
	if (argc != 2)
		return (0);
	while (argv[i] != '\0')
	{
		if (i % 2 == 0 && one_to_four(argv[i]) == 0)
			return (0);
		if (i % 2 == 1 && argv[i] != 32)
			return (0);
		else
			i++;
	}
	if (i == 0)
		return (0);
	if (i > 31)
		return (0);
	return (1);
}
