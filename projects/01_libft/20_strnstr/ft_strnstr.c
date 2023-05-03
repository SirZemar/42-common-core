/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:34:17 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/02 17:11:28 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (i == n)
			return (NULL);
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			if (haystack[i + j + 1] == '\0' || i + j == n - 1)
				return (NULL);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
