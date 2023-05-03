/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:56:39 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/02 12:44:05 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buffer_s1;
	unsigned char	*buffer_s2;

	buffer_s1 = (unsigned char *)s1;
	buffer_s2 = (unsigned char *)s2;

	while (n && *buffer_s1 == *buffer_s2)
	{
		buffer_s1++;
		buffer_s2++;
		n--;
	}
	if (n)
		return (*buffer_s1 - *buffer_s2);
	else
		return (0);
}
