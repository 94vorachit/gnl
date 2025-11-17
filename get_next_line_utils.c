/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:49:20 by vorhansa          #+#    #+#             */
/*   Updated: 2025/11/17 15:29:47 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		i;
	int		j;
	char	*res;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (size + 1));
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[size] = '\0';
	return (res);
}

char	*ft_strchr(const char *s, int ch)
{
	char	*str;

	str = (char *)s;
	while (*str != ch && *str != '\0')
		str++;
	if (*str == ch)
		return (str);
	else
		return (NULL);
}

void	ft_bzero(void*s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;

	res = malloc(size * count);
	if (!res)
		return (NULL);
	ft_bzero(res, size * count);
	return (res);
}
