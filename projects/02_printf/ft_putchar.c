/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:14:29 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 17:30:02 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

// int	main(void)
// {
// 	size_t	len1;
// 	size_t	len2;
//
// 	// unsigned char	c = 'a';
// 	// unsigned char	c = 'z';
// 	// unsigned char	c = 'A';
// 	// unsigned char	c = 'Z';
// 	unsigned char	c = -128;
// 	// unsigned char		c = NULL;
//
// 	len1 = printf("xxxprintf: %c\n", c);
// 	len2 = ft_printf("ft_printf: %c\n", c);
// 	ft_printf("ft_len: %d\n", len1);
// 	ft_printf("len: %d\n", len2);
//
// 	return (0);
// }