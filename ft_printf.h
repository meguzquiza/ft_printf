/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:57:29 by meguzqui          #+#    #+#             */
/*   Updated: 2024/05/11 23:06:57 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
#define ft_printf_h

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(char * str, ... );
int	ft_putchar(char c);
int	ft_putnumbers(long num, int base);
int	ft_putstr(char* str);
int	ft_putpoint(unsigned long num);

#endif

