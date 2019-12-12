/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 05:47:15 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/08 05:54:36 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_width(char *str)
{
	char	*width;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while((ft_isdigit(str[i])))
	{
		count++;
		i++;
	}
	width = malloc(sizeof(char) * (count + 1));
	ft_strlcpy(width, str, count + 1);
	printf("%s\n", width);
	return width;
}
