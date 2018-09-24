/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 12:10:13 by cbaillat          #+#    #+#             */
/*   Updated: 2018/04/11 17:12:11 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream.h"

static char	*parse_format(char *str, va_list ap)
{
	if (!str)
		return (NULL);
	if (*str == 's')
		ft_putstr(va_arg(ap, char*));
	else if (*str == 'S')
		ft_wputstr(va_arg(ap, wchar_t*));
	else if (*str == 'c')
		ft_putchar(va_arg(ap, int));
	else if (*str == 'C')
		ft_wputchar(va_arg(ap, wchar_t));
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ap, int64_t));
	else if (*str == 'u')
		ft_putnbru(va_arg(ap, uint64_t));
	else if (*str == 'f')
		ft_putdouble(va_arg(ap, long double), 3);
	else if (*str == 'x')
		ft_putnbr_base(va_arg(ap, int64_t), 16);
	else if (*str == 'b')
		ft_putnbr_base(va_arg(ap, int64_t), 2);
	else if (*str == 'p')
		ft_putnbr_base((uintmax_t)va_arg(ap, void *), 16);
	++str;
	return (str);
}

void		ft_print(const char *format, ...)
{
	va_list		ap;
	char		*str;

	str = (char*)format;
	va_start(ap, format);
	while (*str != '\0')
	{
		if (*str == '%')
			str = parse_format(str + 1, ap);
		else
			ft_putchar(*str++);
	}
	va_end(ap);
}
