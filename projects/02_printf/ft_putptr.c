/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:40:01 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 17:30:04 by jose-ero         ###   ########.fr       */
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

	if (!ptr)
	{
		len = ft_putstr("(nil)");
		return (len);
	}
	p = (unsigned long long)ptr;
	len = ft_ptrlen(p);
	len += ft_putstr("0x");
	ft_printptr(p);
	return (len);
}

// int	main(void)
// {
// 	size_t	len1;
// 	size_t	len2;
//
// 	len1 = 0;
// 	len2 = 0;
// 	// char	*a = "HELLO";
// 	// char *a = '\0';
// 	// void	*a = (void *)9223372036854775807;
// 	// void	*a = (void *)'Z';
// 	// void	*a = (void *)4294967295;
// 	void		*a = '\0';
//
// 	len1 = printf("xxxprintf: %p\n", a);
// 	len2 = ft_printf("ft_printf: %p\n", a);
// 	ft_printf("ft_len: %d\n", len1);
// 	ft_printf("len: %d\n", len2);
//
// 	return (0);
// }