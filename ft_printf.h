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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char *str, ...);
int	ft_putchar(char c);
int	ft_putnumberlow(long num, int base);
int	ft_puthexaupper(long num, int base);
int	ft_putstr(char *str);
int	ft_putpoint(unsigned long num);

#endif