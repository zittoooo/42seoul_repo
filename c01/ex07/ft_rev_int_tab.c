/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:46:42 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/06 17:47:24 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int i;
	int j;

	i = 0;
	j = sizeo - 1;
	while (i < size)
	{
		tmp[i] = tab[j];
		i++;
		j--;
	}
	i = 0;
	j = size - 1;
	while (i < size)
	{
		tab[i] = tmp[j];
		i++;
		j--;
	}
}
