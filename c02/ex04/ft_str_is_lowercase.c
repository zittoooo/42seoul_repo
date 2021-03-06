/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:49:47 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/08 17:01:16 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			res++;
			i++;
		}
		else
			i++;
	}
	if (res == i)
		return (1);
	else
		return (0);
}
