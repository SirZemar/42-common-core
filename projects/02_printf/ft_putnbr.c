/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:13:42 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/19 11:12:51 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nbrlen(int i)
{
	size_t	n;

	n = 0;
	if (i == -2147483648)
		return (11);
	if (i < 0)
	{
		i = i * -1;
		n++;
	}
	while (i >= 10)
	{
		i = i / 10;
		n++;
	}
	n++;
	return (n);
}

int	ft_maxnbr(int i)
{
	if (i == -2147483648)
		return (-214748364);
	else
		return (0);
}

size_t	ft_putnbr(int i)
{
	int		max;
	size_t	len;

	max = ft_maxnbr(i);
	len = ft_nbrlen(i);
	if (i < 0)
	{
		if (max != 0)
			i = ft_maxnbr(i);
		i *= -1;
		ft_putchar('-');
	}
	if (i < 10)
		ft_putchar(i + '0');
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if (max != 0)
		ft_putchar('8');
	return (len);
}
