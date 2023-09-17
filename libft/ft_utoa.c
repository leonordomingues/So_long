/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:34 by htomas-d          #+#    #+#             */
/*   Updated: 2022/07/22 14:20:16 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	newstrlen(unsigned int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (c > 0)
	{	
		c /= 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int c)
{
	char			*res;
	long			i;
	long			num;

	num = c;
	i = newstrlen(num);
	res = (char *)malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	if (num == 0)
		res[0] = '0';
	res[i] = '\0';
	while (num > 0)
	{
		res[i - 1] = num % 10 + '0';
		num /= 10;
		i--;
	}
	return (res);
}
