

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int count;

	count = 0;

	if (n == -2147483648)
		count += ft_putstr("-2147483648");
	else if (n < 0)
	{
		count += ft_putchr('-');
		n = n * -1;
		ft_putnbr(n);
	}
	else if (n >= 0 && n <= 9)
	{
		count += ft_putchr(n + '0');
	}
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}

	return (count);
}
int  main()
{
	int a = ft_putnbr(-2147483648);

	printf("\n%d",a);
}