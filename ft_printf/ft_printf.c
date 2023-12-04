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

int	my_printf(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (c == 's')
		count += ft_putstr(va_arg(ap, const char *));
	if (c = 'p')
		count += ft_putstr("0x");
		count += ft_putnbr_base("0x");
	
	
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
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = -20;
	printf("||<-->ytgtftu%d || <-->%d || <-->%d || <-->%d", 20, 30, 15, 6464);
}
