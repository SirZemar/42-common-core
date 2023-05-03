/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:53:56 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/03 16:52:46 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (dest)
	{
		i = 0;
		j = 0;
		while (s1[j] != '\0')
			dest[i++] = s1[j++];
		j = 0;
		while (s2[j] != '\0')
			dest[i++] = s2[j++];
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
