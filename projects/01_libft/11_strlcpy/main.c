/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:17:24 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/01 17:19:28 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while ((src[i] != '\0') && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (src_len);
}

int	main(void)
{
	char	dest[] = "Eduardo";

	printf("%li\n", ft_strlcpy(dest, "Marinho", 0));
}
