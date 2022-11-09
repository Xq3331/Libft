/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:04:39 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/09 14:26:59 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *src, size_t size)
{
	size_t	y;
	size_t	i;

	y = 0;
	i = 0;
	if ((!(d) || !(src)) && size == 0)
		return (0);
	while (d[i])
		i++;
	if (i > size)
		return (ft_strlen(src) + size);
	while (i < size - 1 && src[y])
	{
		d[i] = src[y];
		i++;
		y++;
	}
	d[i] = '\0';
	return (i);
}
