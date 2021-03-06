/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:25:23 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/05 12:32:47 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int c;
	int r;

	r = 0;
	while (r < x)
	{
		c = 0;
		while (c < y)
		{
			if ((r == 0 && c == 0) | ((r == x - 1) && (c == 0)))
				ft_putchar('A');
			else if ((r == 0 && c == y - 1) | ((r == x - 1) && (c == y - 1)))
				ft_putchar('C');
			else if ((r == 0 | r == x - 1) && (c != 0 | c != y - 1))
				ft_putchar('B');
			else if ((r != 0 | r != x - 1) && (c == 0 | c == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
