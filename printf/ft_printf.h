/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:19:10 by haboussi          #+#    #+#             */
/*   Updated: 2019/12/20 08:19:02 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

void	ft_while_(char **number, char *conv, char **stock, int i);
void	ft_while_part_one(char *conv, char **stock, char **number, int i);
void	ft_while_part_two_int3(char *conv, char **stock, char **number, int i);
void	ft_while_part_one_int3(char *conv, char **stock, char **number, int i);
void	ft_active_all_13(char *conv, char **stock, int len, int i);
void	ft_active_all3(char *conv, char **stock, char **number, int i);
void	ft_active3(char *stock, char *conv);
void	ft_while_part_five_int3(char **g_add, char **stock, int len);
void	ft_while_part_four_int3(char **g_add, char **stock, int len);
int		ft_atoi(char *str);
void	ft_while_part_threex(char *conv, char **stock, char **number, int i);
void	ft_while_part_two(char *conv, char **stock, char **number, int i);
void	ft_active_all_1_char(char *conv, char **stock, int len, int i);
void	ft_active_all_char(char *conv, char **stock, char **number, int i);
void	ft_active_char(char *stock, char *conv);
void	ft_while_part_one_p(char *conv, char **stock, char **number, int i);
void	ft_while_part_two_p(char *conv, char **stock, char **number, int i);
void	ft_active_all_1_pour(char *conv, char **stock, int len, int i);
void	ft_active_all_pour(char *conv, char **stock, char **number, int i);
void	ft_active_pour(char *stock, char *conv);
void	ft_while_part_three_s(char *conv, char **stock, char **number, int i);
int		ft_skip_minus(char *conv, int i);
void	ft_active_all_1_string(char *conv, char **stock, int len, int i);
void	ft_active_all_string(char *conv, char **stock, char **number, int i);
void	ft_active_string(char *stock, char *conv);
void	ft_while_part_one_s(char *conv, char **stock, char **number, int i);
void	ft_while_part_two_s(char *conv, char **stock, char **number, int i);
void	ft_while_part_two_int(char *conv, char **stock, char **number, int i);
void	ft_while_part_one_int(char *conv, char **stock, char **number, int i);
void	ft_active_all_1(char *conv, char **stock, int len, int i);
void	ft_active_all(char *conv, char **stock, char **number, int i);
void	ft_active(char *stock, char *conv);
void	ft_while_part_five_int(char **g_add, char **stock, int len);
void	ft_while_part_four_int(char **g_add, char **stock, int len);
void	ft_while_part_three_int(char *conv, char **stock, char **number, int i);
char	*ft_adress(unsigned long long n);
char	*ft_adress2(unsigned long long n);
char	*ft_char(char s);
int		ft_check_zero(char *stock);
char	*ft_conditions(char *str);
char	*ft_delete_zero(char *conv);
char	*ft_delete_minus(char *stock);
char	*ft_delete_point(char *conv);
int		ft_isdigit(int c);
char	*ft_stock_int_u(unsigned int n, char *dest);
char	*ft_itoa_2(unsigned int n);
char	*ft_strrev2(char *str);
char	*ft_stock_int(int n, char *dest);
char	*ft_itoa(int n);
char	*ft_itohexa(unsigned int n);
char	*ft_itohexa2(unsigned int n);
char	*ft_itohexa3(unsigned long long n);
char	*ft_null(char *result);
void	ft_while(char **str, char **conv, int *num, int *count);
void	ft_free(char **stock, char **conv);
void	ft_condition_2(char *stock, char *conv, char *str, va_list arg);
void	ft_condition_1(char *stock, char *conv, char *str, va_list arg);
void	ft_active_active(char *str, char *stock, char *conv, va_list arg);
char	**ft_etoile(va_list arg, int *count);
char	*ft_work_etoile(int num, char *conv, char **etoile);
int		ft_work(va_list arg, char *str);
int		ft_printf(char *format, ...);
char	*ft_strdup(char *src);
char	*ft_trim(char *stock, int len);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_strlcpy(char *dst, char *src, int n);
char	*ft_substr(char *s, int start, int len);
char	*ft_strchr(char *str, int c);
void	ft_putstr_write(char *str);
char	*ft_strrev(char *str);
void	*ft_memset(void *b, int c, int len);
int		ft_lenght2(unsigned int n);
int		ft_lenght(unsigned long long n);
char	*ft_stock(char *s1, char *s2);
#endif
