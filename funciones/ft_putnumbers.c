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

int	ft_putnumbers(long num, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789abcdef";
	if (num < 0)
	{
		write (1, "-", 1);
		count += 1;
		return (count + ft_putnumbers(-num, base));
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		count = ft_putnumbers(num / base, base);
		return (count + ft_putnumbers(num % base, base));
	}
	return (count);
}
