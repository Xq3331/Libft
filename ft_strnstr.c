/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:53:48 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/09 22:52:48 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (!s2)
		return ((char *) s1);
	while (i < size && (unsigned char) s1[i])
	{
		y = 0;
		while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[y])
		{
			y++;
			i++;
		}
		if (y == ft_strlen(s2))
			return ((char *) s1 + i - y);
		i++;
	}
	return (0);
}
