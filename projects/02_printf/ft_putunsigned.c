/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:46 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/19 23:23:53 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_unbrlen(unsigned int i)
{
	size_t	n;

	n = 0;
	while (i >= 10)
	{
		i = i / 10;
		n++;
	}
	n++;
	return (n);
}

size_t	ft_putunsigned(unsigned int i)
{
	size_t	len;

	len = ft_unbrlen(i);
	if (i < 10)
		ft_putchar(i + '0');
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	return (len);
}

// int	main(void)
// {
// 	size_t	len1;
// 	size_t	len2;
// 	// int	i = -2147483648;
// 	// int	i = 2147483648;
// 	// int	i = 4294967295;
// 	// int	i = 'Z';
// 	// int	i = 0;
// 	int		i = '\0';
//
// 	len1 = printf("xxxprintf: %u\n", i);
// 	len2 = ft_printf("ft_printf: %u\n", i);
// 	ft_printf("ft_len: %d\n", len1);
// 	ft_printf("len: %d\n", len2);
//
// 	return (0);
// }