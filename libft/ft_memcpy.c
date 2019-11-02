/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:37:56 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/22 18:39:33 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)dest;
	b = (char *)src;
	if (dest == src)
	{
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
