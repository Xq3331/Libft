/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:12:51 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/09 13:06:31 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t size)
{
	void	*m;

	if (!c || !size)
		return (0);
	m = malloc(size * c);
	if (!(m))
		return (0);
	ft_bzero(m, c * size);
	return (m);
}
