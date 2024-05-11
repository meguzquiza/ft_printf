/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:30:42 by meguzqui          #+#    #+#             */
/*   Updated: 2024/05/11 23:11:52 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	tipo(char c, va_list args)
{
	if (c == 'i')
		ft_putnumbers(va_arg(args, int), 10);
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	if (c == 's')
		ft_putstr(va_arg(args, char*));
	if (c == 'd')
		ft_putnumbers(va_arg(args, double), 10);
	if (c == 'u')
		ft_putnumbers(va_arg(args, double), 10);
	if (c == 'p')
		ft_putpoint(va_arg(args, unsigned long));
	if (c == 'x')
	if (c == 'X')
	if (c == '%')
		write (1, "%", 1);
}

int	ft_printf(char* str, ... )
{
	int	cont;
	va_list	args;

	va_start(args, *str);
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == '%')
		{
			tipo (str[cont + 1], args);
			cont++;
		}
		else
			write (1, &str[cont], 1);
		cont++;
	}
	va_end(args);
	return(cont);
}

int main()
{
	char c = 'a';
	int	x = -214748343;
	ft_printf("%c%d\n", c, x);
	printf("%c%d\n", c, x);
	return 0;
}
