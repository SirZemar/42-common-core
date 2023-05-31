/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:29:24 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 16:55:56 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		nbr = n % 10 + 48;
		write(fd, &nbr, 1);
	}
	else if (n >= 0 && n < 10)
	{
		nbr = n + 48;
		write(fd, &nbr, 1);
	}
	else if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
}
