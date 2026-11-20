/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:57:51 by fmartusc          #+#    #+#             */
/*   Updated: 2024/08/11 15:40:15 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 40
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strchrs(char *line, int c);
void	*ft_calloc(size_t count, size_t size);
void	ft_strcat(char *s1, char *s2);
void	ft_strcatnl(char *s1, char *s2);
void	*ft_realloc(char *line, int i);

#endif
