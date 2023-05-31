/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:06:49 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 17:26:20 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	chr;
	char	*str;

	len = ft_strlen(s);
	chr = c;
	str = (char *)s;
	while (len >= 0)
	{
		if (str[len] == chr)
		{
			return (str + len);
		}
		len --;
	}
	return (NULL);
}
