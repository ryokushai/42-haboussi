/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:45:57 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/11 05:04:57 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf(char *format, ...)
{
	char	*ptr;
	va_list	arg;
	int		i;
	unsigned long long 		j;
	char	*str;
	char	*conv;
	unsigned long long		u;
	int num;
	char	*flags;
	char	*stock;
	i = 0;
	va_start(arg, format);
	str = format;
	while (*str != '\0')
	{
		while (*str != '%')
		{
			ft_putchar(*str);
			str++;
			if (*str == '\0')
				return ;
		}
		str++;
		conv = ft_conditions(str);
		//printf("%s\n", conv);		
		num = strlen(conv);
		str = str + num;
		if (*str == 'c')
		{
			j = va_arg(arg, int);
			ft_putchar(j);
		}
		if (*str == 's')
		{
			ptr = va_arg(arg, char *);
			ft_putstr(ptr);
		}
		if (*str == 'd')
		{
			stock = ft_itoa(va_arg(arg, int));
			//printf("let's debug this shit %s\n", stock);
		}
		if (*str == 'x')
		{
			j = va_arg(arg, unsigned long long );
			ft_adress(j);
		}
		if (*str == 'X')
		{
			j = va_arg(arg, int);
			ft_itohexa2(j);
		}
		if (*str == 'p')
		{
			u = va_arg(arg, unsigned long long);
			ft_adress(u);
		}
		str++;
		ft_active(stock, conv);
		//printf("conv debug%s\n", conv);
	}
	va_end(arg);
}
