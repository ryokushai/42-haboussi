/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:44:49 by haboussi          #+#    #+#             */
/*   Updated: 2020/01/31 10:44:50 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_write(char *str)
{
	int i;

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

int		ft_lenght2(unsigned int n)
{
	unsigned int i;
	unsigned int s;

	s = n;
	i = 0;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

int		ft_lenght(unsigned long long n)
{
	unsigned long long	i;
	unsigned long long	s;

	s = n;
	i = 0;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

char	*ft_stock(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = (s1 ? ft_strlen(s1) : 0);
	j = ft_strlen(s2);
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
