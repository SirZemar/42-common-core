/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:42:08 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 16:55:54 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;
	char	*ptr_last_dest;
	char	*ptr_last_src;

	if (!src && !dest)
		return ((void *)dest);
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	ptr_last_dest = ptr_dest + (n - 1);
	ptr_last_src = ptr_src + (n - 1);
	if (ptr_dest < ptr_src)
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		while (n--)
			*ptr_last_dest-- = *ptr_last_src--;
	}
	return ((void *)dest);
}
