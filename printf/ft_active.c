/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:12:36 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/11 07:06:42 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_active_all(char	*conv, char **stock,char **number, int i)
{
	char	*add;
	int		len;

	
	len = atoi(*number) - ft_strlen(*stock);
	free(*number);
	*number = NULL;
	//printf("number iiiiis %s\n", *number);
	
	if (len < 0)
		return ;
	add = malloc(len + 1);
	if (ft_isdigit(conv[i]))
	{
		memset(add, ' ', len);
		*stock = ft_stock(add, *stock);
	
	}
	if (conv[i] == '-')
	{
		memset(add, ' ', len);
		*stock= ft_stock(*stock, add);
	
	}
	if (conv[i] == '.')
	{
		memset(add, '0', len);
		*stock = ft_stock(add, *stock);
		
		//printf("zbi%d\n", len);
	}
}

void	ft_active(char *stock, char *conv)
{
	int		i;
	char 	*number;
	int		count;

	
	i = ft_strlen(conv);
	number = NULL;
	count = 0;
	i--;
	printf("indec i : %d\n", i);
	while (i >= 0)
	{
		if (ft_isdigit(conv[i]))
		{
			if (number == NULL)
			{
				number = malloc(strlen(conv) + 1);
			}
			number[count] = conv[i];	
			count++;
			if (i == 0)
			{
				count = 0;	
				number = ft_strrev(number);
				//printf("number %s\n", number);
				ft_active_all(conv, &stock, &number, i);
				
				conv[count] = '\0';
			}
		}
		if (conv[i] == '-')
		{
			count = 0;
			number = ft_strrev(number);
			//printf("number 2xx %s\n", number);
			ft_active_all(conv, &stock, &number, i);
		}
		if (conv[i] == '.')
		{
			count = 0;
			number = ft_strrev(number);
			//printf("number 3xx %s\n", number);
			ft_active_all(conv, &stock, &number, i);
		}
		i--;
	}
	printf("%s\n", stock);
}
