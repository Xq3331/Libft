/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:46:19 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 08:53:19 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && ((char *)p1)[i] && ((char *)p2)[i]
			&& ((char *)p1)[i] == ((char *)p2)[i])
			i++;
	return (((char *)p1)[i] - ((char *)p2)[i]);
}
