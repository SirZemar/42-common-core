/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:23:09 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/19 23:34:31 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_format(va_list args, const char format)
{
	size_t	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len = ft_putptr(va_arg(args, void *));
	else if (format == 'i' || format == 'd')
		len = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len = ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = ft_putchar(format);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len += ft_printf_format(args, str[(i++) + 1]);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return ((int) len);
}
