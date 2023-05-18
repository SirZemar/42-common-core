/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:40:01 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/18 14:28:06 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ptrlen(unsigned long long p)
{
	size_t	i;

	i = 0;
	while (p >= 16)
	{
		p = p / 16;
		i++;
	}
	i++;
	return (i);
}

void	ft_printptr(unsigned long long p)
{
	if (p >= 16)
	{
		ft_printptr(p / 16);
		ft_printptr(p % 16);
	}
	else
	{
		if (p < 10)
			ft_putchar(p + '0');
		else
			ft_putchar(p - 10 + 'a');
	}
}

size_t	ft_putptr(void *ptr)
{
	unsigned long long	p;
	size_t				len;

	p = (unsigned long long)ptr;
	len = ft_ptrlen(p) + 2;
	ft_putstr("0x");
	ft_printptr(p);
	return (len);
}
