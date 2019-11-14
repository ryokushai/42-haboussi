/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:18:31 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/14 14:41:03 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itohexa(int n)
{
	unsigned int	f;
	int				len;
	char			*dest;
	char			*tab;
	char			s;
	int				i;
	int				j;

	j = 0;
	tab = "0123456789abcdef";
	len = ft_lenght(n);
	f = n;
	dest = malloc(sizeof(char) * (len + 1));
	while (f != 0)
	{
		i = f % 16;
		f = f / 16;
		s = tab[i];
		dest[j] = s;
		j++;
	}
	dest = ft_strrev(dest);
	return (dest);
}
