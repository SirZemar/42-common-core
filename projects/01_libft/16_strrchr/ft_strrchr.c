/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:06:49 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/16 19:33:34 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	car;
	char	*str;
	int		size;

	size = ft_strlen(s);
	car = c;
	str = (char *)s;
	while (size >= 0)
	{
		if (str[size] == car)
		{
			return (str + size);
		}
		size --;
	}
	return (NULL);
}
