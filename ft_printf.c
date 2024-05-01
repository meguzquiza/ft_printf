/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:30:42 by meguzqui          #+#    #+#             */
/*   Updated: 2024/05/01 23:13:58 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void * val(char x, va_list aa)
{
	if (x == 'c')
		putchar(va_arg(aa, int));
}

int	ft_printf(char const * str, ...)
{
	va_list	aa;
	int	i;

	i = 0;
	va_start(aa, str);
	while(str[i] != '\0')
	{
		if (str[i] == '%')
		{
			val(str[i + 1], aa);
			i++;
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	va_end(aa);
}

int main()
{
	ft_printf("432%dmi función", 10);
	printf("%d", 10);
	return 0;
}
