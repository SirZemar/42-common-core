/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:06:49 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/01 22:31:05 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + s_len);
	while (*(s + s_len) != c && s_len > 0)
		s_len--;
	if (s_len == 0)
		return (NULL);
	else
		return ((char *)s + s_len);
}
