/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:15:55 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/05 12:32:29 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int r;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			if ((r == 0 && c == 0) | (r == 0 && c == x - 1))
				ft_putchar('A');
			else if ((r == y - 1 && c == 0) | (r == y - 1 && c == x - 1))
				ft_putchar('C');
			else if ((r == 0 | r == y - 1) && (c != 0 | c != x - 1))
				ft_putchar('B');
			else if ((r != 0 | r != y - 1) && (c == 0 | c == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
