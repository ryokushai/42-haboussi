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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strrev(char *str)
{
	int		i;
	int		k;
	int		j;
	char	temp;

	i = 0;
	while (str[i])
		i++;
	k = 0;
	j = i - 1;
	while (k < j)
	{
		temp = str[k];
		str[k] = str[j];
		str[j] = temp;
		k++;
		j--;
	}
	return (str);
}

int		ft_lenght(int n)
{
	int	i;
	int	s;

	s = n;
	i = 0;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return i;
}

char    *ft_stock(char *s1, char *s2)
{
    int     i;
    int     j;
    char    *ptr;

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
    }
    i = 0;
    while (s2[i])
        ptr[j++] = s2[i++];
    ptr[j] = '\0';
    return (ptr);
}
