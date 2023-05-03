/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:02:07 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/03 13:56:51 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s || !len || start > ft_strlen(s))
	{
		dest = (char *)malloc(1 * sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest)
	{

		ft_strlcpy(dest, &s[start], len + 1);
		return (dest);
	}
	else
		return (NULL);
}
