/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 00:06:03 by haboussi          #+#    #+#             */
/*   Updated: 2019/10/22 21:25:38 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **tab, int j)
{
	while (j)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

static int	count_words(char *str, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (((i == 0) || str[i - 1] == c) && str[i] != c)
			nb++;
		i++;
	}
	return (nb);
}

static char	*get_word(char *str, int i, char c)
{
	int		len;
	int		j;
	char	*word;

	j = i;
	len = 0;
	while ((str[j] != c) && str[j])
	{
		len++;
		j++;
	}
	if (!(word = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!word)
		return (NULL);
	j = 0;
	while ((str[i] != c) && str[i])
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char		**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(str))
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) *
			(count_words((char *)str + i, c) + 1))))
		return (NULL);
	while (str[i])
	{
		if (((i == 0) || str[i - 1] == c) && str[i] != c)
		{
			if (!(tab[j] = (get_word((char *)str, i, c))))
			{
				return (ft_free(tab, j - 1));
			}
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
