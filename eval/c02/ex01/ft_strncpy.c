/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:30:59 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/07 20:31:08 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while(n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return dest;

