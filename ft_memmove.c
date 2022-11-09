/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:29 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/09 22:17:01 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t size)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	*d2;

	if (size == 0)
		return (d);
	s2 = (unsigned char *)s;
	d2 = (unsigned char *)d;
	i = -1;
	if (s < d)
	{
		i = strlen(s) + 1;
		while (--i > 0)
			((unsigned char *)d2)[i] = s2[i];
	}
	else
	{
		while (++i < size)
			((unsigned char *)d2)[i] = s2[i];
	}
	return (d2);
}
