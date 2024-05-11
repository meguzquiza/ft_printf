/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:46:03 by meguzqui          #+#    #+#             */
/*   Updated: 2024/05/11 22:28:00 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putdigit(int number)
{
	if (number == -2147483648)
		ft_putstr("-2147483648");
	else if (number < 0)
	{
		ft_putchar('-');
		ft_putdigit(-number);
	}
	else if (number >= 10)
	{
		ft_putdigit(number / 10);
		ft_putchar(number % 10 + '0');
	}
	else
		ft_putchar(number + '0');
}
