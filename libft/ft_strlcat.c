/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:27:51 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/21 18:09:48 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	count;
	size_t	len_dest2;

	count = 0;
	len_dest2 = ft_strlen(dst);
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dest < n)
	{
		while (src[count] && len_dest < n - 1)
		{
			dst[len_dest] = src[count];
			len_dest++;
			count++;
		}
		dst[len_dest] = '\0';
		return (len_dest2 + len_src);
	}
	else
		return (n + len_src);
}
