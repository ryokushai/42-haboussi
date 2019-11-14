/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:19:10 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/14 14:57:08 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
#include <stdarg.h>

void	ft_printf(char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_itoa(int n);
char	*ft_itohexa(int n);
char	*ft_itohexa2(int n);
int		ft_lenght(int n);
char	*ft_strrev(char *str);
#endif
