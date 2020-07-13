/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:15:35 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/13 17:35:08 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ret;
	int i;

	ret = dest;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	int j = 0;
	while (nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (ret);
}

int main()
{
	char s1[10] = "hi";
	char s2[20] = "hello";

	ft_strncat(s1, s2, 4);
	printf("%s", s1);
}
