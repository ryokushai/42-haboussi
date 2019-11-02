/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:34:38 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/22 21:06:55 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	size_t	i;
	size_t	j;
	char	*st;

	st = (char *)str;
	i = 0;
	if (str == 0 && n == 0)
		return (NULL);
	if (ptr[0] == '\0')
		return ((char *)str);
	while (st[i] && i < n)
	{
		j = 0;
		while (st[i + j] == ptr[j] && i + j < n)
		{
			if (ptr[j + 1] == '\0')
			{
				return (&st[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
