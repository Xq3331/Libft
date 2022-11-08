/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:53:48 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 09:28:14 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (!s2)
		return (s1);
	while (s1[i] && i < size)
	{
		while (s1[i] == s2[y])
		{
			i++;
			y++;
		}
		if (s2[y] == '\0')
			return (s1 + i - y);
		y = 0;
		i++;
	}
	return (NULL);
}
