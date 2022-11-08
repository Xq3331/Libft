/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:24:43 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 08:27:26 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	y;

	y = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			y = i;
		i++;
	}
	if (y >= 0)
		return (str + i - y);
	return (0);
}
