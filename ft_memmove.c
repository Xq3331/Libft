/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:29 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/09 09:27:14 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t size)
{
	size_t	i;
	char	*s2;

	if (size == 0)
		return (d);
	s2 = (char *)s;
	i = 0;
	while (i < size)
	{
		((char *)d)[i] = s2[i];
		i++;
	}
	return (d);
}
