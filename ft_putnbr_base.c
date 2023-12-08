/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:20:10 by aabdenou          #+#    #+#             */
/*   Updated: 2023/12/04 18:20:11 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int				count;
	unsigned long	bs;

	count = 0;
	bs = ft_strlen(base);
	if (nbr >= bs)
	{
		count += ft_putnbr_base(nbr / bs, base);
	}
	count += ft_putchr(base[nbr % bs]);
	return (count);
}
