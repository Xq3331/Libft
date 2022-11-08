/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:29 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 16:27:16 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t size)
{
	size_t		i;
	const char	*s2;
	char		*d2;

	i = 0;
	s2 = (char *) s;
	d2 = (char *) d;
	while (i < size && s2[i])
	{
		ft_memset((char *)d2 + i, s2[i], sizeof(s2[i]));
		i++;
	}
	return (d2);
}
