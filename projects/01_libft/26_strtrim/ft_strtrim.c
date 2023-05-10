/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:32:27 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/10 17:42:17 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strempty(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	if (!str)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	len = 0;
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	if (s1[start] == '\0')
		return (ft_strempty());
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	len = end - start;
	str = (char *)malloc((len + 2) * sizeof(char));
	if (!str)
		return (0);
	end = 0;
	while (end <= len)
		str[end++] = s1[start++];
	str[end] = '\0';
	return (str);
}
