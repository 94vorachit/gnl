/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:49:33 by vorhansa          #+#    #+#             */
/*   Updated: 2025/11/24 17:24:26 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h> //malloc free
# include <unistd.h> //read
// # include <sys/types.h> //size_t
// # include <sys/uio.h>
// # include <fcntl.h> //open
// # include <stdio.h>

size_t	ft_strlen(const char *str);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int ch);
char	*get_next_line(int fd);

#endif