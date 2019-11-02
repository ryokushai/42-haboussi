/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 02:58:36 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/02 13:49:32 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_error(int fd, char **line, size_t bs)
{
	if (line == NULL || bs < 1 || bs > MAXINT || fd < 0)
	{
		return (1);
	}
	return (0);
}

char	*ft_stock(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = (s1 ? strlen(s1) : 0);
	j = strlen(s2);
	ptr = malloc(sizeof(char) * (i + j + 1));
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
		{
			ptr[j++] = s1[i++];
		}
		free(s1);
	}
	i = 0;
	while (s2[i])
		ptr[j++] = s2[i++];
	ptr[j] = '\0';
	return (ptr);
}

int		ft_check(char **checkpoint, char **line, char *buffer)
{
	char	*ptr;
	char	*tmp;

	if (*checkpoint)
	{
		if ((ptr = ft_strchr(*checkpoint, '\n')))
		{
			*ptr = '\0';
			*line = ft_stock(*line, *checkpoint);
			tmp = ft_stock(0, ptr + 1);
			free(*checkpoint);
			*checkpoint = tmp;
			free(buffer);
			return (1);
		}
		else
		{
			*line = ft_stock(*line, *checkpoint);
			free(*checkpoint);
			*checkpoint = NULL;
		}
	}
	return (0);
}

int		ft_check2(char **checkpoint, char **line, char *buffer)
{
	char *ptr;

	if ((ptr = ft_strchr(buffer, '\n')))
	{
		*ptr = '\0';
		*line = ft_stock(*line, buffer);
		*checkpoint = ft_stock(*checkpoint, ptr + 1);
		free(buffer);
		return (1);
	}
	else
		*line = ft_stock(*line, buffer);
	return (0);
}

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		c2;
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
