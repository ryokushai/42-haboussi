/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:19:10 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/07 21:03:13 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
#include <stdarg.h>

char	*ft_flags(char *str);
int     ft_isdigit(int c);
char	*ft_precision(char *str);		
char	*ft_substr(char *s, int start, int len);
void	ft_skip(char *str);
char	*ft_strchr(char *str, int c);
int		ft_strlen(char *str);
int		ft_strlcpy(char *dst, char *src, int n);
void	ft_printf(char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_itoa(int n);
char	*ft_itohexa(int n);
char	*ft_itohexa2(int n);
int		ft_lenght(int n);
char	*ft_strrev(char *str);
char	*ft_stock(char *s1, char *s2);
char	*ft_adress(unsigned long long n);
char	*ft_conditions(char *str);
#endif
