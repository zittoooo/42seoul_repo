/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 19:44:14 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/05 20:32:09 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_end(char c, char c1, char c2);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				ft_print_end(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_end(char c, char c1, char c2)
{
	if (c == '7' && c1 == '8' && c2 >= '9')
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
