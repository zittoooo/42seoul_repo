/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:28:46 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/09 23:04:13 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char s1[10] = "";
	char s2[] = "abcd";
	ft_strncpy(s1, s2, 3);
	printf("%s\n", s1);

	strncpy(s1, s2, 3);
	printf("%s", s1);
}
