/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:29:26 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/09 17:17:29 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] >= 'a' && *str <= 'z') | (str[i] >= 'A' && str[i] <= 'Z'))
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
