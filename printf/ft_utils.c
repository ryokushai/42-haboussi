/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:51:21 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/14 20:26:14 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int g_printf;

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_printf++;
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlcpy(char *dst, char *src, int n)
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

char	*ft_substr(char *s, int start, int len)
{
	char	*str;

	if (!s)
		return (0);
	if (start > len)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start <= len)
		ft_strlcpy(str, s + start, len + 1);
	str[len] = '\0';
	return (str);
}

char	*ft_strchr(char *str, int c)
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
			return (NULL);
		i++;
	}
	return (ptr + i);
}
