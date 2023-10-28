/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:37:57 by jose-ero          #+#    #+#             */
/*   Updated: 2023/06/13 22:45:13 by jose-ero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "fcntl.h"

static char	*read_file(int fd, char *str);
static char	*get_line(char *str);
static char	*next_read_line(char *str);

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	str = read_file(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = next_read_line(str);
	return (line);
}

static char	*read_file(int fd, char *str)
{
	char	*buffer;
	int		read_bytes;

	read_bytes = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		buffer[read_bytes] = '\0';
		str = ft_strjoin(str, buffer, read_bytes);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (read_bytes < 0)
	{
		free(str);
		return (NULL);
	}
	else
		return (str);
}

static char	*get_line(char *str)
{
	char	*line;
	size_t	i;

	if (!*str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	ft_strlcpy(line, str, i + 1);
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*next_read_line(char *str)
{
	int		i;
	int		j;
	char	*next_line;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	next_line = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!next_line)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		next_line[j++] = str[i++];
	next_line[j] = '\0';
	free(str);
	return (next_line);
}

/* int	main(void)
{
	int		fd;
	char	*line;

	fd = open("./long_line.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("%s", line);
	}
	return (0);
} */