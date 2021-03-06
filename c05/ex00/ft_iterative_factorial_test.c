/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:13:09 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/14 11:45:21 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int save;

	save = 1;

	if(nb <= 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			save *= nb * (nb-1);
			nb -= 2;
		}
	}
	return (save);
}

int		main()
{
	printf("%d", ft_iterative_factorial(4));
}
