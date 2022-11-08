/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:36:24 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 10:31:26 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void	*p, int v, size_t count);

void	ft_bzero(void *s, size_t n);

void	*memmove(void *d, const void *s, size_t size);

void	*ft_memcpy(void *d, const void *s, size_t size);

size_t	ft_strlcpy(char *d, const char *src, size_t size);

size_t	ft_strlcat(char *d, const char *src, size_t size);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t size);

void	*ft_memchr(const void *m, int c, size_t size);

int		ft_memcmp(const void *p1, const void *p2, size_t size);

char	*ft_strnstr(const char *s1, const char *s2, size_t size);

void	*calloc(size_t c, size_t size);

int		ft_atoi(const char *str);

char	*ft_strdup(const char *s);