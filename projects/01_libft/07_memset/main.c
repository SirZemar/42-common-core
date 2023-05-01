/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:59:55 by jose-ero          #+#    #+#             */
/*   Updated: 2023/04/29 11:39:26 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = s;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return ((void *)s);
}

int main() {
    char str[] = "Hello, world!";
    int n = 6;

    printf("Before memset(): %s\n", str);

    ft_memset(str, '*', n);

    printf("After memset(): %s\n", str);

    return 0;
}