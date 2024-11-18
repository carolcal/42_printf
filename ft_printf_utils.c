/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:40:56 by cayamash          #+#    #+#             */
/*   Updated: 2024/11/18 16:41:13 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	write (1, s, i);
	return (i);
}

int	ft_putnbr_base(long long nbr, char *base, int div)
{
	int		i;
	int		count;
	char	str[11];

	i = 0;
	count = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		count ++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[i++] = base[nbr % div];
		count++;
		nbr /= div;
	}
	i--;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (count);
}

int	ft_putpointer(unsigned long p)
{
	int		i;
	int		count;
	char	*base;
	char	str[17];

	i = 0;
	count = 0;
	base = "0123456789abcdef";
	if (!p || p == 0)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	while (p > 0)
	{
		str[i] = base[p % 16];
		p /= 16;
		i++;
	}
	count += i;
	i--;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (count);
}
