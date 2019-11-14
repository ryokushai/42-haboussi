/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:39:44 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/13 21:31:49 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
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
	while ( k < j)
	{
		temp = str[k];
		str[k] = str[j];
		str[j] = temp;
		k++;
		j--;
	}
	return str;
}

int		ft_lenght(int n)
{
	int	i;
	int	s;

	s = n;
	i = 0;
	while (s != 0)
	{
		s = s /10;
		i++;
	}
	return i;
}

char	*ft_itohexa(int n)
{
	unsigned int	f;
	char			s;
	int				i;
	char			*dest;
	int				len;
	int				j;

	j = 0;
	len = ft_lenght(n);
	dest = malloc(sizeof(char) * (len + 1));
	f = n;
	while (f != 0)
	{
		i = f % 16;
		f = f / 16;
		s = "0123456789abcdef"[i];
		dest[j] = s;
		j++;
	}
	dest = ft_strrev(dest);
	return dest;
}

int main()
{
	printf("%s", ft_itohexa(590));
}
