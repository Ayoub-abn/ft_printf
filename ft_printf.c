/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:46:57 by aabdenou          #+#    #+#             */
/*   Updated: 2023/12/04 17:26:30 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>

static int	my_printf(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchr(va_arg(ap, int));
	else if (c == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
	{
		count = ft_putstr("0x");
		count += ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count = ft_putnbr_base(va_arg(ap, unsigned int), "0123456789");
	else if (c == 'x')
		count = ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count = ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else
		count = ft_putchr('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX%", format[i]) == 1)
				count += my_printf(format[i], ap);
		}
		else
			count += ft_putchr(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
