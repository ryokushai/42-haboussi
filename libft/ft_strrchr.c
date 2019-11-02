/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:50:38 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/21 00:04:56 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	c2;
	char	*ptr;
	int		last;

	i = 0;
	ptr = (char *)str;
	c2 = (char)c;
	last = ft_strlen(ptr);
	while (last >= i)
	{
		if (ptr[last] == c)
		{
			return (ptr + last);
		}
		last--;
	}
	return (NULL);
}
