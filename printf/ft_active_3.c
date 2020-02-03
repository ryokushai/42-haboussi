/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 14:00:18 by haboussi          #+#    #+#             */
/*   Updated: 2020/02/02 14:00:19 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*g_add;
int		g_count;

void	ft_while_part_two_int3(char *conv, char **stock, char **number, int i)
{
	if (conv[i] == '-' && *number)
	{
		(*number)[g_count] = '\0';
		g_count = 0;
		if (ft_skip_minus(conv, i))
		{
			*number = ft_strrev(*number);
			ft_active_all3(conv, stock, number, i);
		}
		else
		{
			*number = NULL;
			free(*number);
		}
	}
}

void	ft_while_part_one_int3(char *conv, char **stock, char **number, int i)
{
	if (conv[i] == '0' && *number && i == 0)
	{
		(*number)[g_count] = '\0';
		g_count = 0;
		*number = ft_strrev(*number);
		ft_active_all3(conv, stock, number, i);
	}
	else if (ft_isdigit(conv[i]))
	{
		if (*number == NULL)
		{
			*number = malloc(ft_strlen(conv) + 1);
		}
		(*number)[g_count] = conv[i];
		g_count++;
		if (i == 0 && conv[i] != '0')
		{
			(*number)[g_count] = '\0';
			g_count = 0;
			*number = ft_strrev(*number);
			ft_active_all3(conv, stock, number, i);
		}
	}
}

void	ft_active_all_13(char *conv, char **stock, int len, int i)
{
	g_add = malloc(len + 1);
	if (conv[i] == '0')
		ft_while_part_five_int(&g_add, stock, len);
	else if (ft_isdigit(conv[i]))
	{
		ft_memset(g_add, ' ', len);
		g_add[len] = '\0';
		*stock = ft_stock(g_add, *stock);
	}
	if (conv[i] == '-')
	{
		ft_memset(g_add, ' ', len);
		g_add[len] = '\0';
		*stock = ft_stock(*stock, g_add);
	}
	if (conv[i] == '.')
		ft_while_part_four_int3(&g_add, stock, len);
}

void	ft_active_all3(char *conv, char **stock, char **number, int i)
{
	int	len;

	len = ft_atoi(*number) - ft_strlen(*stock);
	free(*number);
	*number = NULL;
	if (len < 0)
		return ;
	if (*stock[0] == '-')
		g_add = malloc(len + 2);
	else
		g_add = malloc(len + 1);
	ft_active_all_13(conv, stock, len, i);
}

void	ft_active3(char *stock, char *conv)
{
	int		i;
	char	*number;
	char	*xtr;

	i = ft_strlen(conv);
	number = NULL;
	g_count = 0;
	i--;
	xtr = strchr(conv, '.');
	if ((xtr && conv[0] == '0' && xtr[1] != '-') ||
	(conv[0] == '0' && conv[1] == '-'))
		conv = ft_delete_zero(conv);
	while (i >= 0)
	{
		ft_while_part_one_int3(conv, &stock, &number, i);
		ft_while_part_two_int3(conv, &stock, &number, i);
		if (conv[i] == '.')
		{
			ft_while_part_threex(conv, &stock, &number, i);
		}
		i--;
	}
	ft_putstr_write(stock);
}
