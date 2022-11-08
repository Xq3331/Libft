/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:27:42 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/08 10:31:18 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	i;

	s2 = (char *) malloc((sizeof(char) + 1) * ft_strlen(s));
	i = 0;
	while (i < ft_strlen(s))
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
