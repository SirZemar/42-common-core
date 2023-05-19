/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:38:07 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/19 12:49:56 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexlen(unsigned int i)
{
	size_t	len;

	len = 0;
	while (i >= 16)
	{
		i = i / 16;
		len++;
	}
	len++;
	return (len);
}

void	ft_hexprint(unsigned int i, char format)
{
	if (i >= 16)
	{
		ft_hexprint(i / 16, format);
		ft_hexprint(i % 16, format);
	}
	else
	{
		if (i < 10)
			ft_putchar(i + '0');
		else if (format == 'x')
			ft_putchar(i + 'a' - 10);
		else if (format == 'X')
			ft_putchar(i + 'A' - 10);
	}
}

size_t	ft_puthex(unsigned int i, char format)
{
	size_t	len;

	len = ft_hexlen(i);
	ft_hexprint(i, format);
	return (len);
}

// int	main(void)
// {
// 	size_t len1;
// 	size_t len2;

// 	// unsigned int i = 10;
// 	// unsigned int i = 4294967295;
// 	// unsigned int i = 2147483647;
// 	// unsigned int i = -2147483648;
// 	// unsigned int i = -7483648;
// 	unsigned int i = '\0';

// 	len1 = printf("xxxprintf: %X\n", i);
// 	len2 = ft_printf("ft_printf: %X\n", i);
// 	ft_printf("ft_len: %d", len1);
// 	ft_printf("len: %d", len2);

// 	return (0);
// } 