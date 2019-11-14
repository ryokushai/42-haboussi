/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:30:22 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/11 17:39:57 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int		ft_printf(int num, ...)
{
	va_list		arguments;
	double		sum;
	int			x;

	x = 0;
	sum = 0;
	va_start(arguments, num);
	while (x < num)
	{
		sum += va_arg(arguments, double);
		x++;
	}
	va_end(arguments);
	return (sum / num);
}

int main()
{
	printf("%f", ft_printf(5.2 ,3.3, 5, 0.5, 0.1 ));
}
