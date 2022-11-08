/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:39:45 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 08:45:46 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *m, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (char *)m + i)
	{
		if (((char *)m)[i] == c)
			return (((char *)m) + i);
		i++;
	}
	return (0);
}
