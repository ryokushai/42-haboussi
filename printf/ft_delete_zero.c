/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 10:19:36 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/11 10:47:08 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_delete_zero(char *conv)
{
	int	len;
	char *result;
	int i;
	int j;

	i = 1;
	j = 0;
	len = ft_strlen(conv);
	result = malloc(len);
	while (conv[i])
	{
		result[j++] = conv[i++];
	}
	return (result);
}
