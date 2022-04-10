/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kouc <ael-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:27:59 by ael-kouc          #+#    #+#             */
/*   Updated: 2021/12/08 12:15:51 by ael-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_len(int long nbr)
{
	int	i;

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
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				tmp;

	tmp = n;
	if (n < 0)
	{
		write(1, "-", 1);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	if (nb < 10)
		ft_putchar((nb + 48));
	return (int_len(tmp));
}

int	ft_putnbr_u(unsigned int nb)
{
	unsigned int	tmp;

	tmp = nb;
	if (nb >= 10)
	{
		ft_putnbr_u(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	if (nb < 10)
		ft_putchar((nb + 48));
	return (int_len(tmp));
}
