/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:52:56 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/01 13:34:51 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;
	i = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (src_len);
}
