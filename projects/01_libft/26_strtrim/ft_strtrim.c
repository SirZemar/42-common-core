/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:32:27 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/03 22:39:11 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	end = 0;
	start = 0;
	if (s1[0] != '\0')
		end = ft_strlen(s1) - 1;
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > 0 && end > start && ft_strchr(set, s1[end]))
		end--;
	if (start != end)
	{
		dest = (char *)malloc(((end - start) + 2) * sizeof(char));
		ft_strlcpy(dest, s1 + start, (end - start) + 2);
		return ((char *)dest);
	}
	dest = (char *)malloc(1 * sizeof(char));
	dest[0] = '\0';
	return ((char *)dest);
}
