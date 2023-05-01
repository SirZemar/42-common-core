/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:44:30 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/01 12:52:10 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;
	char	*ptr_last_dest;
	char	*ptr_last_src;

	if (!src || !dest)
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

int main(void) {
    char src[] = "Hello, world12345678!";
    char src2[] = "Hello, world12345678!";
    char dest[16] = "Goobye Universe";
    char dest2[16] = "Goobye Universe";
    size_t n = 15;
    size_t n2 = 15;

    printf("Before ft_memcpy dest string is: %s\n", dest);
    printf("Before memcpy dest string is: %s\n", dest2);
    ft_memmove(dest, src, n);
	memmove(dest2, src2, n2);
    printf("After ft_memcpy dest string is: %s\n", dest);
    printf("After memcpy dest string is: %s\n", dest2);

    return (0);
}