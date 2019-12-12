/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:45:57 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/11 13:33:45 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf(char *format, ...)
{
	char	*ptr;
	va_list	arg;
	int		i;

	char	*str;
	char	*conv;
	int j;
	int num;
	//char	*flags;
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
		/*
		if (*str == 's')
		{
			stock = ft_putstr(va_arg(arg, char *));
		}
		*/
		if (*str == 'd')
		{
			stock = ft_itoa(va_arg(arg, int));
		}
		if (*str == 'x')
		{
			stock = ft_itohexa(va_arg(arg, unsigned long long));
		}
		if (*str == 'X')
		{
			stock = ft_itohexa2(va_arg(arg, unsigned long long));
		}
		if (*str == 'p')
		{
			stock = ft_adress(va_arg(arg, unsigned long long));
		}
		str++;
		ft_active(stock, conv);
	//	printf("conv stock %d\n", atoi(stock));
	}
	va_end(arg);
}
