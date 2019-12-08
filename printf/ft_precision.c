/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:55:50 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/07 23:57:59 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_precision(char *str)
{
	char	*tab;
	char	*precision;
	int		count;
	int		i;
	int		j;
	
	i = 0;
	count = 0;
	tab = ft_strchr(str, '.');
	printf("%s\n", tab);
	while (ft_isdigit(str[i]))
	{
		count++;
		i++;
	}
	precision = malloc(sizeof(char) * (count + 1));
	ft_strlcpy(precision, str, count + 1);
	//printf("%d\n",count);
	//printf("%s\n", precision);
	return precision;
}
