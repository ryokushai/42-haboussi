/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:45:57 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/14 14:10:03 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf(char *format, ...)
{
	char	*ptr;
	va_list	arg;
	int		i;
	int		j;
	char	*lol;

	i = 0;
	va_start(arg, format);
	lol = format;
	while (*lol != '\0')
	{
		while (*lol != '%')
		{
			ft_putchar(*lol);
			lol++;
			if (*lol == '\0')
				return ;
		}
		lol++;
		if (*lol == 'c')
		{
			j = va_arg(arg, int);
			ft_putchar(j);
		}
		if (*lol == 's')
		{
			ptr = va_arg(arg, char *);
			ft_putstr(ptr);
		}
		if (*lol == 'd')
		{
			j = va_arg(arg, int);
			ft_itoa(j);
		}
		lol++;
	}
	va_end(arg);
}
