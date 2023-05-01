/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:36:31 by jose-ero          #+#    #+#             */
/*   Updated: 2023/04/29 12:09:29 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = s;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

int	main(void)
{
	int		i;
	char	str[] = "Hello world!";

	i = 6;
	printf("Before ft_bzero(): %s\n", str);
	ft_bzero(str, i);
	printf("After ft_bzero(): %s\n", str);
	return (0);
}
