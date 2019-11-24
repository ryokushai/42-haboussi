/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:45:57 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/21 16:06:10 by haboussi         ###   ########.fr       */
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
	unsigned long long		u;

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
		if (*lol == 'x')
		{
			j = va_arg(arg, int);
			ft_itohexa(j);
		}
		if (*lol == 'X')
		{
			j = va_arg(arg, int);
			ft_itohexa2(j);
		}
		if (*lol == 'p')
		{
			u = va_arg(arg, unsigned long long);
			ft_adress(u);
		}
		lol++;
	}
	va_end(arg);
}