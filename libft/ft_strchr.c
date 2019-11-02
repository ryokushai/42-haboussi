/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:37:47 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/22 19:04:03 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	c2;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	c2 = (char)c;
	while (ptr[i] != c)
	{
		if (ptr[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (ptr + i);
}
