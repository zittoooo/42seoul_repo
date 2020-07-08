/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee </var/mail/jiholee>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:33:05 by jiholee           #+#    #+#             */
/*   Updated: 2020/07/07 20:33:07 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;

	if(str[0]=='\0')
		return 1;

	while(str[i])
	{
		if(str[i] >= 65 && str[i] <= 90)  // A~Z
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
