/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:12:36 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/10 04:46:24 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_active_all(char	*conv, char *stock,char *number, int i)
{
	char	*add;
	int		len;

	len = atoi(number) - ft_strlen(conv);
	add = malloc(len + 1);
	if (ft_isdigit(conv[i]))
	{
		memset(add, ' ', len);
		stock = ft_stock(add, stock);
		printf("%s\n", stock);
	}
	if (conv[i] == '-')
	{
		memset(add, ' ', len);
		stock= ft_stock(stock, add);
		printf("k%s\n", stock);
	}
	if (conv[i] == '.')
	{
		memset(add, '0', len);
		stock = ft_stock(add, stock);
		printf("%s\n", stock);
	}
}

void	ft_active(char *stock, char *conv)
{
	int		i;
	char 	*number;
	int		count;

	
	i = ft_strlen(conv);
	printf("this is the i len %d\n", i);
	number = malloc(i + 1 );
	count = 0;
	i--;
	while (i >= 0)
	{
		if (ft_isdigit(conv[i]))
		{
			number[count++] = conv[i];
			printf("indice %d\n", i);	
			if (i == 0)
			{
				//printf("x");
				number = ft_strrev(number);
				ft_active_all(conv, stock,number, i);
				printf("debug number%s\n", number);
				printf("lets debug this fucking index i%d\n", i);
				stock[count] = '\0';
			}
		}
		if (conv[i] == '-')
			ft_active_all(conv, stock, number, i);
		if (conv[i] == '.')
			ft_active_all(conv,stock, number, i);
		i--;
	}
}
