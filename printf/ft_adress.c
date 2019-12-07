/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:47:58 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/07 17:46:12 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_adress(unsigned long long n)
{
	char	*ptr;
	char	*str;
	int l;

	str = ft_itohexa(n);
//	ptr = malloc(100);	
	ptr = ft_stock("0x",str);
	ft_putstr(ptr);
	return ptr;	
}
