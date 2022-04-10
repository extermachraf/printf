/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kouc <ael-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:03:50 by ael-kouc          #+#    #+#             */
/*   Updated: 2021/12/09 16:41:46 by ael-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "ft_printf.h"

int	print(char str, va_list va)
{
	int	i;

	i = 0;
	if (str == 'c')
		i += ft_putchar(va_arg(va, int));
	if (str == 's')
		i += ft_putstr(va_arg(va, char *));
	if (str == 'i' || str == 'd')
		i += ft_putnbr(va_arg(va, int));
	if (str == 'u')
		i += ft_putnbr_u(va_arg(va, unsigned int));
	if (str == 'x')
		i += ft_printhexlow(va_arg(va, unsigned int));
	if (str == 'X')
		i += ft_printhexup(va_arg(va, unsigned int));
	if (str == 'p')
	{
		i = ft_putstr("0x");
		i += ft_printp(va_arg(va, unsigned long));
	}
	if (str == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	va;

	i = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i += print(*str, va);
		}
		else
			i += ft_putchar(*str);
		str++;
	}
	return (i);
}
