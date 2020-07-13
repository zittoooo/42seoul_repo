/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:24:39 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/12 22:10:47 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(int view, int row[4])
{
	int seen;
	int i;
	int highest;

	seen = 0;
	i = 0;
	highest = 0;
	while (i < 4)
	{
		if (row[i] > highest)
		{
			seen++;
			highest = row[i];
		}
		i++;
	}
	if (seen == view)
		return (1);
	else
		return (0);
}

int		check_unique(int row[4])
{
	int i;
	int j;
	int *p;

	p = row;
	i = 0;
	j = i + 1;
	while (i < 4)
	{
		while (j < 4)
		{
			if (p[i] == p[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
