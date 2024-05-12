/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:00:16 by meguzqui          #+#    #+#             */
/*   Updated: 2024/05/11 23:02:28 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnumberlow(long num, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		return (ft_putnumberlow(-num, base) + 1);
	}
	else if (num < base)
	{
		ft_putchar(symbols[num]);
		count += 1;
		return (count);
	}
	else
	{
		count = ft_putnumberlow(num / base, base);
		return (count + ft_putnumberlow (num % base, base));
	}
}

int	ft_puthexaupper(long num, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (num < 0)
	{
		write (1, "-", 1);
		count += 1;
		return (count + ft_puthexaupper(-num, base));
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		count = ft_puthexaupper(num / base, base);
		return (count + ft_puthexaupper(num % base, base));
	}
	return (count);
}
