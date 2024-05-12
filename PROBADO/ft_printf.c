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

void	tipo(char c, va_list args, int *count)
{
	if (c == 'i')
		(*count) += ft_putnumberlow(va_arg(args, int), 10);
	if (c == 'c')
		(*count) += ft_putchar(va_arg(args, int));
	if (c == 's')
		(*count) += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		(*count) += ft_putpoint(va_arg(args, unsigned long));
	if (c == 'd')
		(*count) += ft_putnumberlow(va_arg(args, int), 10);
	if (c == 'u')
		(*count) += ft_putnumberlow(va_arg(args, unsigned int), 10);
	if (c == 'x')
		(*count) += ft_putnumberlow(va_arg(args, unsigned int), 16);
	if (c == 'X')
		(*count) += ft_puthexaupper(va_arg(args, unsigned int), 16);
	if (c == '%')
		(*count) += write (1, "%", 1);
	//printf ("num_cont: %d\n", *count);
}

int	ft_printf(char *str, ...)
{
	int		cont;
	va_list	args;

	va_start(args, *str);
	cont = 0;
	while (*str)
	{	
		if (*str == '%')
		{
			tipo (*++str, args, &cont);
		}
		else
			cont += write (1, str, 1);
		str++;
	}
	va_end(args);
	return (cont);
}

/*int main()
{
	//char c = 'a';
	int	x = 2147483;
	//unsigned long p = 0x0;
	void* pp = (void*)pp;
	int a = ft_printf("%d %x hola mundo\n", x, 123);
	int b = printf("%d %x hola mundo\n", x, 123);
	printf ("%d %d\n", a, b);
	return 0;
}*/
