/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 00:09:48 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 16:56:06 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*buffer_s1;
	unsigned char	*buffer_s2;

	buffer_s1 = (unsigned char *)s1;
	buffer_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*(buffer_s1 + i) == *(buffer_s2 + i))
	{
		if (i == (n - 1))
			break ;
		if (*(buffer_s1 + i) == '\0' || *(buffer_s2 + i) == '\0')
			break ;
		i++;
	}
	return (*(buffer_s1 + i) - *(buffer_s2 + i));
}
