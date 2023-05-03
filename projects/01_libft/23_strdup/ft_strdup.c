/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:49:25 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/02 19:01:18 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dup;
	size_t		len;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup)
	{
		ft_strlcpy(dup, s, len + 1);
		return (dup);
	}
	return (NULL);
}
