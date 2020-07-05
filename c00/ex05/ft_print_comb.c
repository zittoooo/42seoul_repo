/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 19:44:14 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/05 20:00:29 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
				k++;
			//	if (i == '7' && j == '8' && k >= '9')
			//		write(1, "", 1);
			//	else
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
