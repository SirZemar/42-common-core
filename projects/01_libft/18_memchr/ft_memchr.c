/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:21:15 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/10 18:08:15 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer_s;
	unsigned char	buffer_c;
	size_t			i;

	i = 0;
	buffer_s = (unsigned char *)s;
	buffer_c = (unsigned char)c;
	while (i < n && *buffer_s != buffer_c)
	{
		buffer_s++;
		i++;
	}
	if (i == n)
		return (NULL);
	else
		return ((void *)buffer_s);
}
