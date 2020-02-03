/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 14:00:29 by haboussi          #+#    #+#             */
/*   Updated: 2020/02/02 14:00:30 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*g_add;
int		g_count;

void	ft_while_(char **number, char *conv, char **stock, int i)
{
	(*number)[g_count] = '\0';
	g_count = 0;
	*number = ft_strrev(*number);
	ft_active_all3(conv, stock, number, i);
}

void	ft_while_part_five_int3(char **g_add, char **stock, int len)
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

void	ft_while_part_four_int3(char **g_add, char **stock, int len)
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

void	ft_while_part_threex(char *conv, char **stock, char **number, int i)
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
			if (ft_atoi(*number) == 0 && ft_atoi(*stock) == 0)
				*stock = "";
			g_count = 0;
			ft_active_all3(conv, stock, number, i);
		}
		else if (*number)
		{
			ft_while_(number, conv, stock, i);
		}
	}
}
