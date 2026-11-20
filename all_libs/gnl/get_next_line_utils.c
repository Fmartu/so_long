/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:36:33 by fmartusc          #+#    #+#             */
/*   Updated: 2024/08/11 15:40:53 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchrs(char *line, int c)
{
	int	i;

	i = 0;
	if (!line)
		return (NULL);
	while (line[i])
	{
		if (line[i] == c)
		{
			return (line + i);
		}
		i++;
	}
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*line;
	size_t	i;

	i = 0;
	line = (char *)malloc(sizeof(char) * (count * size));
	if (!line)
		return (NULL);
	while (i < size * count)
	{
		line[i] = 0;
		i++;
	}
	return ((void *)line);
}

void	ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		s2[j] = 0;
		j++;
	}
}

void	ft_strcatnl(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		s2[j] = 0;
		if (s1[i + j] == '\n')
			break ;
		j++;
	}
	if (s2[j + 1])
		ft_strcat(s2, s2 + j + 1);
}

void	*ft_realloc(char *line, int i)
{
	char	*ret;

	ret = (char *) ft_calloc(sizeof(char), ((i * BUFFER_SIZE) + 1));
	if (!ret)
		return (NULL);
	if (line && *line)
	{
		ft_strcat(ret, line);
		free (line);
	}
	return (ret);
}
