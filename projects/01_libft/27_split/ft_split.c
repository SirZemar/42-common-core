/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:22:07 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/04 13:55:07 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		count_words(char const *s, char c);
void				create_word(char const *s, char c, char **dest);

char	**ft_split(char const *s, char c)
{
	unsigned int	words;
	char			**dest;

	words = count_words(s, c);
	if (s[0] == '\0' || words == 0)
	{
		dest = (char **)malloc(sizeof(char *) + 1);
		dest[0] = NULL;
		return (dest);
	}
	dest = (char **)malloc((words + 1) * sizeof(char *));
	create_word(s, c, dest);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	return (dest);
}

unsigned int	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	counted;

	i = 0;
	counted = 0;
	while (*s)
	{
		if (*s == c)
			counted = 0;
		if (*s != c && !counted)
		{
			i++;
			counted = 1;
		}
		s++;
	}
	return (i);
}

void	create_word(char const *s, char c, char **dest)
{
	unsigned int	end;
	unsigned int	start;

	start = 0;
	end = 0;
	while (s[start] != '\0')
	{
		if (s[start] == c)
			start++;
		if (s[start] != c && s[start] != '\0')
		{
			end = start;
			while (s[end] != c && s[end] != '\0')
				end++;
			*dest = ft_substr(s, start, end - start);
			start = end + 1;
			dest++;
		}
	}
	*dest = 0;
}
