/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:33:37 by fmartusc          #+#    #+#             */
/*   Updated: 2024/08/11 15:40:20 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	int			readret;
	static char	buf[BUFFER_SIZE + 1];
	int			i;

	line = NULL;
	i = 0;
	readret = 1;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	while (ft_strchrs(line, '\n') == 0)
	{
		if (!*buf)
			readret = read(fd, buf, BUFFER_SIZE);
		if (readret <= 0)
			break ;
		i++;
		line = (char *)ft_realloc(line, i);
		ft_strcatnl(line, buf);
	}
	if (line && *line)
		return (line);
	free(line);
	return (0);
}
