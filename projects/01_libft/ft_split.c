/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <jose-ero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:22:07 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/31 16:55:57 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		count_words(char const *s, char c);
void				create_word(char const *s, char c, char **dest);

static size_t	word_count(char const *s, char c)
{
	size_t			i;
	unsigned int	counted;

	if (!s)
		return (0);
	i = 0;
	counted = 0;
	while (*s)
	{
		if (*s != c && !counted)
		{
			i++;
			counted = 1;
		}
		if (*s == c)
			counted = 0;
		s++;
	}
	return (i);
}

static char	*get_word(const char *s, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	i2;
	int		i3;
	char	**tab;

	if (!s)
		return (0);
	i = -1;
	i2 = 0;
	i3 = -1;
	tab = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (0);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && i3 < 0)
			i3 = i;
		else if ((s[i] == c || i == ft_strlen(s)) && i3 >= 0)
		{
			tab[i2++] = get_word(s, i3, i);
			i3 = -1;
		}
	}
	tab[i2] = 0;
	return (tab);
}
