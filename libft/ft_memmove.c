/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:22:01 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/22 18:44:33 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (dest);
	else if (d > s)
	{
		while (i < n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
