/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:34:00 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/13 13:50:17 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n)
	{
		if (*s1 != *s2 && n > 0)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int		main()
{
	char s1[10] = "abcd";
	char s2[10] = "abcd";
	printf("%d", ft_strncmp(s1, s2, 4));  //0

	char s3[] = "abcd";
	char s4[] = "abce";
	printf("%d", ft_strncmp(s3, s4, 3));  //0
	
	char s5[] = "abc";
	char s6[] = "abd";
	printf("%d", ft_strncmp(s5, s6, 3));  // -1
	
	char s7[] = "abcd";
	char s8[] = "abcb";
	printf("%d", ft_strncmp(s7, s8,4));   //2
}
