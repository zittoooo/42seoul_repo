/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 10:01:45 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/06 19:02:22 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int x)
{
	int first;
	int second;

	if (x > 10)
	{
		first = x / 10;
		second = x % 10;
		ft_putchar(first + 48);
		ft_putchar(second + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(x + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_num(i);
			ft_putchar(' ');
			print_num(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
