/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:29:56 by htomas-d          #+#    #+#             */
/*   Updated: 2022/07/22 14:21:08 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_newstrlen(unsigned int temp)
{
	int	i;

	i = 0;
	while (temp > 15)
	{
		temp /= 16;
		i++;
	}
	return (i);
}

void	ft_putex(t_print *tab)
{
	int				i;
	unsigned int	n;
	unsigned int	temp;
	char			*a;

	i = 0;
	n = va_arg(tab->args, int);
	temp = n;
	i = ft_newstrlen(temp);
	a = (char *)ft_calloc(i + 1, sizeof(char *));
	while (n > 0 && i >= 0)
	{
		a[i--] = "0123456789abcdef" [n % 16];
		n /= 16;
	}
	tab->lentot += write(1, a, ft_strlen(a));
	free(a);
}
