/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:41:54 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 17:30:05 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
	{
		len = ft_putstr("(null)");
		return (len);
	}
	while (str[len] != '\0')
		len += ft_putchar(str[len]);
	return (len);
}

// int	main(void)
// {
// 	size_t	len1;
// 	size_t	len2;
//
// 	len1 = 0;
// 	len2 = 0;
// 	// char	*c = "Lorem, imaginarium qantus merillion";
// 	// char	*c = "A";
// 	// char	*c = 0;
// 	char	*c = "\n";
//  	// char	*c = '\0';
// 	// char		*c = NULL;
//
// 	len1 = printf("xxxprintf: %s\n", c);
// 	len2 = ft_printf("ft_printf: %s\n", c);
// 	ft_printf("ft_len: %d\n", len1);
// 	ft_printf("len: %d\n", len2);
//
// 	return (0);
// }