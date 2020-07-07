/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:29:20 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/07 20:29:24 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
		
	dest[i] = '\0';
	return dest;
}
