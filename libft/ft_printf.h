/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:59:49 by htomas-d          #+#    #+#             */
/*   Updated: 2022/07/22 11:41:38 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "get_next_line.h"

typedef struct s_print
{
	va_list	args;
	int		lentot;
}			t_print;

int		ft_printf(char const *str, ...);
void	ft_putchar(t_print *tab);
void	ft_putstr(t_print *tab);
void	ft_putptr(t_print *tab);
void	ft_putsigned(t_print *tab);
void	ft_putunsigned(t_print *tab);
char	*ft_itoa(int c);
char	*ft_utoa(unsigned int c);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putex(t_print *tab);
void	ft_putexup(t_print *tab);
char	**ft_split(const char *str, char separator);
void	*ft_memcpy(void *dest, const void *src, size_t len);

#endif
