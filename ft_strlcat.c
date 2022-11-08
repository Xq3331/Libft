/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:04:39 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 16:16:56 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!d)
		return (src);
	while (d[y])
		y++;
	if (size > 0)
	{
		while (i < size && src[i])
		{
			d[y] = src[i];
			i++;
			y++;
		}
		d[y] = 0;
	}
	return (y);
}
