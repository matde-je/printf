/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftptr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:14:37 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/22 18:13:14 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftptr(va_list *arg)
{
	unsigned long int	x;

	x = va_arg(*arg, unsigned long int);
	if (x == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	ftbase(x, "0123456789abcdef");
	return (ftlen(x, 16) + 2);
}
