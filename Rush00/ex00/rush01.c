/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:26:32 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/05 12:32:26 by jiholee          ###   ########.fr       */
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
			if ((r + c == 0) | (x != 1 && y != 1 && r == x - 1 && c == y - 1))
				ft_putchar('/');
			else if ((r == x - 1 && c == 0) | ((r == 0 && c == y - 1)))
				ft_putchar('\\');
			else if ((r != 0 | r != x - 1) && (c == 0 | c == y - 1))
				ft_putchar('*');
			else if ((r == 0 | r == x - 1) && (c != 0 | c != y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
