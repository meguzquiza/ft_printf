/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 22:53:13 by meguzqui          #+#    #+#             */
/*   Updated: 2024/05/11 22:55:07 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_countpoint(unsigned long num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

int	ft_putpointer(unsigned long num)
{
	if (num >= 16)
	{
		ft_putpointer(num / 16);
		ft_putpointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + 48);
		else
			ft_putchar(num - 10 + 'a');
	}
	return (ft_countpoint(num));
}

int	ft_putpoint(unsigned long num)
{
	int		len;

	len = 0;
	if (num == 0)
	{
		len = len + write (1, "0x0", 3);
		return (len);
	}
	len = write (1, "0x", 2);
	len = len + ft_putpointer(num);
	return (len);
}
