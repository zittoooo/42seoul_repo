/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:32:09 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/07 20:32:11 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;

	if(*str == '\0')  // empty
		return 1;

	while(str[i])
	{
		if(str[i] >= 48 && str[i] <= 57 )   // number
		{
			res++;			
			i++;
		}
		else
			i++;
	}

	if(res == i)
		return 1;
	else
		return 0;
}
