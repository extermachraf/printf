/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kouc <ael-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:43:46 by ael-kouc          #+#    #+#             */
/*   Updated: 2021/12/08 12:15:10 by ael-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_hex(unsigned long nbr)
{
	int		i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i = 1;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int	ft_printhexlow(unsigned int nbr)
{
	char			*base;
	unsigned long	tmp;

	base = "0123456789abcdef";
	tmp = nbr;
	if (nbr >= 16)
	{
		ft_printhexlow(nbr / 16);
		ft_printhexlow(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
	return (int_hex(tmp));
}

int	ft_printhexup(unsigned int nbr)
{
	char			*base;
	unsigned int	tmp;

	base = "0123456789ABCDEF";
	tmp = nbr;
	if (nbr >= 16)
	{
		ft_printhexup(nbr / 16);
		ft_printhexup(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
	return (int_hex(tmp));
}

int	ft_printp(unsigned long nbr)
{
	char		*base;
	long long	tmp;

	base = "0123456789abcdef";
	tmp = nbr;
	if (nbr >= 16)
	{
		ft_printp(nbr / 16);
		ft_printp(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
	return (int_hex(tmp));
}
