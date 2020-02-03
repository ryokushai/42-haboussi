/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_string2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:09:49 by haboussi          #+#    #+#             */
/*   Updated: 2020/01/31 10:09:51 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*g_add;
int		g_count;

void	ft_while_part_one_s(char *conv, char **stock, char **number, int i)
{
	if (ft_isdigit(conv[i]))
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
			ft_active_all_string(conv, stock, number, i);
		}
	}
}

void	ft_while_part_two_s(char *conv, char **stock, char **number, int i)
{
	if (conv[i] == '-' && *number && ft_skip_minus(conv, i))
	{
		(*number)[g_count] = '\0';
		g_count = 0;
		*number = ft_strrev(*number);
		ft_active_all_string(conv, stock, number, i);
	}
	else if (!(ft_skip_minus(conv, i)) && conv[i] == '-')
	{
		free(*number);
		*number = NULL;
		g_count = 0;
	}
}
