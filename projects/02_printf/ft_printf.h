/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:38:25 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 17:29:59 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putptr(void *ptr);
size_t	ft_putnbr(int i);
size_t	ft_putunsigned(unsigned int i);
size_t	ft_puthex(unsigned int i, const char format);

#endif