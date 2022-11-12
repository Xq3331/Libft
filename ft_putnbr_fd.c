/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:06:20 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/11/12 14:57:21 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(long n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_power(int i)
{
	int	rep;

	rep = 1;
	while (i-- > 1)
		rep *= 10;
	return (rep);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		i;
	char	c;

	nb = n;
	i = check(nb);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	while (i >= 0)
	{
		c = (nb / ft_power(i)) + '0';
		ft_putchar_fd(nb, fd);
		nb /= 10;
		i--;
	}
}
