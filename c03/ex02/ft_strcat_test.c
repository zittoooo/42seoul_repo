/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:35:56 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/13 17:22:56 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *ret;
	int i;
	int j;

	ret = dest;
	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		dest++;
	while (i-- > 0)
		*dest++ = *src++;

	*dest = '\0';
	return (ret);
}

int		main()
{
	char str1[10] = "hi";
	char str2[10] = "hello";

	ft_strcat(str1, str2);
	printf("%s", str1);
}
