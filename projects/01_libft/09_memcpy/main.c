/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:00:22 by jose-ero          #+#    #+#             */
/*   Updated: 2023/04/29 18:05:06 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dest;
	const char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (!src || !dest)
	{
		return ((void *)dest);
	}
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
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
    ft_memcpy(dest, src, n);
	memcpy(dest2, src2, n2);
    printf("After ft_memcpy dest string is: %s\n", dest);
    printf("After memcpy dest string is: %s\n", dest2);

    return (0);
}
