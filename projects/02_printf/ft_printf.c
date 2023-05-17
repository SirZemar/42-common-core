/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:23:09 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/17 12:54:39 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf_format(va_list args, char format)
{
	size_t len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));
	write(1, "\n", 2);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	size_t  i;
	size_t  len;
	
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] !='\0')
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

int	main(void)
{
	int	i;
	i = ft_printf("Hello %s", "World");
	printf("Len %i\n", i);
	return (0);
}
