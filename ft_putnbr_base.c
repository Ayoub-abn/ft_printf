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

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	count;
	int	bs;

	count = 0;
	bs = ft_strlen(base);
	if (nbr < bs)
		count += ft_putchr(base[nbr]);
	else
	{
		count += ft_putnbr_base(nbr / bs, base);
		count += ft_putchr(base[nbr % bs]);
	}
	return (count);
}
// int	main(void)
// {
// 	int c;
// 	c = ft_putnbr_base(0,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// 	c = ft_putnbr_base(34254540,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// 	c = ft_putnbr_base(2147483647,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// 	c = ft_putnbr_base(16,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// 	c = ft_putnbr_base(10,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// 	c = ft_putnbr_base(12,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// 	c = ft_putnbr_base(15,"0123456789abcdef");
// 	printf("\ncount : %d\n",c);
// }