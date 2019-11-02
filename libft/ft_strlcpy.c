/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:39:19 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/21 19:03:54 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t n)
{
	int		count;
	int		j;
	char	*sr;
	size_t	len_src;

	len_src = ft_strlen(src);
	sr = (char *)src;
	j = n - 1;
	count = 0;
	if (count < j)
	{
		while (sr[count] != '\0' && count < j)
		{
			dst[count] = sr[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (len_src);
}
