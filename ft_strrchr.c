/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:24:43 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/09 08:45:30 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	y;

	y = -1;
	i = 0;
	if (!c)
		return ((char *) str);
	if (!str)
		return (0);
	while (str[i])
		i++;
	i--;
	while (str[i] && i >= 0)
	{
		if (str[i] == c)
			return ((char *) str + i);
		i--;
	}
	return (0);
}
