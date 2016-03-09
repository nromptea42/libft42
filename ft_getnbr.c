/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:00:21 by nromptea          #+#    #+#             */
/*   Updated: 2016/03/09 16:34:13 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getnbr(char *str)
{
	int res;

	res = 0;
	if (str != NULL && *str == '-')
		return (-ft_getnbr(&str[1]));
	while ((*str >= '0') && (*str < +'9'))
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res);
}
