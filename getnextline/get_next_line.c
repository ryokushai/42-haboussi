/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:11:53 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/02 13:49:07 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	int				byte;
	char			*buffer;
	static char		*checkpoint;

	if (ft_error(fd, line, BUFFER_SIZE))
		return (-1);
	*line = malloc(1);
	*line[0] = '\0';
	if (!(buffer = malloc(BUFFER_SIZE + 1)))
		return (-1);
	if (ft_check(&checkpoint, line, buffer))
		return (1);
	while ((byte = read(fd, buffer, BUFFER_SIZE)))
	{
		if (byte < 0)
			return (-1);
		buffer[byte] = '\0';
		if (ft_check2(&checkpoint, line, buffer))
			return (1);
	}
	free(buffer);
	return (0);
}
