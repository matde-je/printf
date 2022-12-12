/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:08:36 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/22 16:00:23 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int			ftlen(unsigned long int nbr, int base);
void		ftbase(unsigned long int nbr, char *base);
long int	ft_putnbr(long int n);
int			ftchar(va_list *arg);
int			ftint(va_list *arg);
int			ftu(va_list *arg);
int			ftptr(va_list *arg);
int			ftstr(va_list *arg);
int			ftx(va_list *arg);
int			ftxx(va_list *arg);
int			ft_strlen(char *string);
int			arg_check(char *string, int i);
int			func(char *string, va_list *args, int i);
int			ft_printf(const char	*string, ...);

#endif