/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:13:45 by haboussi          #+#    #+#             */
/*   Updated: 2020/01/31 10:13:45 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*g_add;
int		g_count;

void	ft_while_part_five_int(char **g_add, char **stock, int len)
{
	if (*stock[0] == '-')
	{
		*stock = ft_delete_minus(*stock);
		ft_memset(*g_add, '0', len);
		(*g_add)[len] = '\0';
		*g_add = ft_stock("-", *g_add);
		*stock = ft_stock(*g_add, *stock);
	}
	else
	{
		ft_memset(*g_add, '0', len);
		(*g_add)[len] = '\0';
		*stock = ft_stock(*g_add, *stock);
	}
}

void	ft_while_part_four_int(char **g_add, char **stock, int len)
{
	*g_add = malloc(len + 2);
	if (*stock[0] == '-')
	{
		len++;
		*stock = ft_delete_minus(*stock);
		ft_memset(*g_add, '0', len);
		(*g_add)[len] = '\0';
		*g_add = ft_stock("-", *g_add);
		*stock = ft_stock(*g_add, *stock);
	}
	else
	{
		ft_memset(*g_add, '0', len);
		(*g_add)[len] = '\0';
		*stock = ft_stock(*g_add, *stock);
	}
}

void	ft_while_part_three_int(char *conv, char **stock, char **number, int i)
{
	if (conv[i + 1] == '-' && **stock == '0')
		**stock = '0';
	else
	{
		if (*number)
			(*number)[g_count] = '\0';
		if ((*number == NULL || ft_atoi(*number) == 0) && ft_check_zero(*stock))
		{
			if (*number == NULL)
			{
				*number = malloc(2);
				(*number)[0] = '0';
				(*number)[1] = '\0';
			}
			g_count = 0;
			ft_active_all(conv, stock, number, i);
		}
		else if (*number)
		{
			(*number)[g_count] = '\0';
			g_count = 0;
			*number = ft_strrev(*number);
			ft_active_all(conv, stock, number, i);
		}
	}
}
