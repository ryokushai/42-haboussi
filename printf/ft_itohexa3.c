/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohexa3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 14:33:02 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/24 14:33:04 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long	g_f;
int					g_len;
char				*g_dest;
char				*g_tab;
char				g_s;
unsigned long long	g_i;
unsigned long long	g_j;

char	*ft_itohexa3(unsigned long long n)
{
	g_j = 0;
	g_tab = "0123456789abcdef";
	g_len = ft_lenght(n);
	g_f = n;
	if (n == 0)
	{
		g_dest = malloc(2);
		g_dest[0] = '0';
		g_dest[1] = '\0';
		return (g_dest);
	}
	g_dest = malloc(sizeof(char) * (g_len + 1));
	while (g_f != 0)
	{
		g_i = g_f % 16;
		g_f = g_f / 16;
		g_s = g_tab[g_i];
		g_dest[g_j] = g_s;
		g_j++;
	}
	g_dest[g_j] = '\0';
	g_dest = ft_strrev(g_dest);
	return (g_dest);
}
