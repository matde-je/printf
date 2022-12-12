/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftargfunc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:35:50 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/22 16:11:09 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	arg_check(char *s, int i)
{
	if (s[i] == '%' && s[i + 1] == '%')
		return (1);
	if (s[i] != '%' || (s[i] != '%' && (s[i + 1] != 'c' || s[i + 1] != 's'
				|| s[i + 1] != 'd' || s[i + 1] != 'u' || s[i + 1] != 'x'
				|| s[i + 1] != 'i' || s[i + 1] != 'p' || s[i + 1] != 'X' )))
		return (2);
	else
		return (0);
}

int	func(char *s, va_list	*arg, int i)
{
	if (s[i + 1] == 'c')
		return (ftchar(arg));
	if (s[i + 1] == 's')
		return (ftstr(arg));
	if (s[i + 1] == 'p')
		return (ftptr(arg));
	if (s[i + 1] == 'd' || s[i + 1] == 'i')
		return (ftint(arg));
	if (s[i + 1] == 'u')
		return (ftu(arg));
	if (s[i + 1] == 'x')
		return (ftx(arg));
	if (s[i + 1] == 'X')
		return (ftxx(arg));
	else
		return (0);
}
