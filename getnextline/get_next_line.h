/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboussi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 03:01:04 by haboussi          #+#    #+#             */
/*   Updated: 2019/11/02 13:49:59 by haboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define MAXINT  2147483647

int		ft_error(int fd, char **line, size_t bs);
int		get_next_line(int fd, char **line);
char	*ft_stock(char *s1, char *s2);
int		ft_check(char **checkpoint, char **line, char *buffer);
int		ft_check2(char **checkpoint, char **line, char *buffer);
char	*ft_strchr(const char *str, int c);
#endif
