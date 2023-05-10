/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:34:17 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/09 20:02:32 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[i] != '\0' && i < len)
	{
		i2 = 0;
		while (big[i + i2] != '\0' && little[i2] != '\0'
			&& (i + i2) < len && big[i + i2] == little[i2])
		{
			if (little[i2 + 1] == '\0')
			{
				return ((char *)&(big[i]));
			}
			i2++;
		}
		i++;
	}
	return (0);
}
