/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:45:19 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/09 15:55:09 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char *ret;

	ret = dest;
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}

int main()
{
	char s1[] = "fd";
	char s2[] = "a";
	
	ft_strcpy(s1, s2);
	printf("%s",s1);
}
