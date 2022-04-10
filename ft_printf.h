/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kouc <ael-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:38:55 by ael-kouc          #+#    #+#             */
/*   Updated: 2021/12/09 15:41:35 by ael-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_printf(const char *str, ...);
int	ft_printhexlow(unsigned int nbr);
int	ft_printhexup(unsigned int nbr);
int	ft_putnbr_u(unsigned int nb);
int	ft_printp(unsigned long nbr);

#endif
