/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:09:25 by jose-ero          #+#    #+#             */
/*   Updated: 2023/05/04 20:13:03 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit_len(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	else if (n == 0)
		return (1);
	while ((unsigned int)n > 0)
	{
		res++;
		n = (unsigned int)n / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		n_len;

	n_len = get_digit_len(n);
	res = malloc((n_len + 1) * sizeof(char));
	if (n == 0)
		res[0] = 48;
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[n_len] = '\0';
	while ((n_len - 1) >= 0 && (unsigned int)n > 0)
	{	
		res[n_len - 1] = ((unsigned int)n % 10) + '0';
		n = (unsigned int)n / 10;
		n_len--;
	}
	return (res);
}
