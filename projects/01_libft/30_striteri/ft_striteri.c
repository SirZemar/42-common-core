/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:07:54 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/04 17:19:31 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void ft_char_to_upper(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32; // Convert lowercase letter to uppercase
    }
    printf("Index: %i\n", index);
}

int main() {
    char s[] = "hello, world!";
    printf("Input string: %s\n", s);
    ft_striteri(s, ft_char_to_upper);
    printf("Result string: %s\n", s);
    return 0;
}