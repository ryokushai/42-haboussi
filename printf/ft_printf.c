/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:45:57 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/13 11:49:43 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	k = 1;
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

char	*ft_strrev2(char *str)
{
	int		i;
	int		k;
	int		j;
	char	temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
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

static int	ft_length(int n)
{
	int	i;
	int s;

	s = n;
	i = 0;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

 char	*ft_stock(int n, char *dest)
{
	unsigned int	f;
	int				i;
	char			s;

	i = 0;
	f = n;
	if (n < 0)
	{
		i = 1;
		dest[0] = '-';
		f = f * (-1);
	}
	while (f != 0)
	{
		s = f % 10 + '0';
		f = f / 10;
		dest[i] = s;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*dest;

	len = ft_length(n);
	if (n < 0)
	{
		if (!(dest = malloc(sizeof(char) * (len + 2))))
			return (NULL);
	}
	else if (n == 0)
	{
		if (!(dest = malloc(sizeof(char) * 2)))
			return (NULL);
		dest[0] = '0';
		dest[1] = '\0';
		return (dest);
	}
	else
	{
		if (!(dest = malloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	dest = ft_stock(n, dest);
	if (n < 0)
	{
		ft_strrev(dest);
		ft_putstr(dest);
	}
	if (n > 0)
	{
		ft_strrev2(dest);
		ft_putstr(dest);
	}
	return (n < 0 ? ft_strrev(dest) : ft_strrev2(dest));
}




void		ft_printf(char *format, ...)
{
	char	*ptr;
	va_list	arg;
	int		i;
	int		j;
	char	*lol;

	i = 0;
	va_start(arg, format);
	lol = format;
	while (*lol != '\0')
	{
		while (*lol != '%')
		{
			ft_putchar(*lol);
			lol++;
			if (*lol == '\0')
				return ;
		}
		lol++;
		if (*lol == 'c')
		{
			j = va_arg(arg, int);
			ft_putchar(j);
		}
		if (*lol == 's')
		{
			ptr = va_arg(arg, char *);
			ft_putstr(ptr);
		}
		if (*lol == 'd')
		{
			j = va_arg(arg, int);
			ft_itoa(j);
		}
		lol++;
	}
	va_end(arg);
}

int main()
{
	char ptr[50] = "hamza";
	ft_printf("%p" ,ptr);
}
