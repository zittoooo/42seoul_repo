/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:45:19 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/09 23:03:23 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
