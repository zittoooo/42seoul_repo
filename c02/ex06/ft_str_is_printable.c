/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:51:12 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/08 18:49:29 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	if (count == i)
		return (1);
	else
		return (0);
}
