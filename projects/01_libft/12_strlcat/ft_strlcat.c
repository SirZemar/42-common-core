/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:15:47 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/09 19:49:07 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size == 0 || size <= dstsize)
		return (size + srcsize);
	i = 0;
	if (!size || size <= dstsize)
		return (size + srcsize);
	while (src[i] != '\0' && i < (size - dstsize - 1))
	{
		dst[dstsize + i] = src[i];
		i++;
	}	
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
