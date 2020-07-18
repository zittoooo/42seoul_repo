/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:34:00 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/15 11:00:22 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 || *s2) && n-- > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char *s1 = "abc";
	char *s2 = "acd";

	printf("%d", ft_strncmp(s1, s2, 2));

}
