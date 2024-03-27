/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayala-b <jayala-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:44:55 by jayala-b          #+#    #+#             */
/*   Updated: 2024/02/23 18:44:57 by jayala-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	put_int(int n)
{
	int				nb;
	unsigned int	i;

	nb = n;
	i = 1;
	if (n < 0 && n != -2147483648)
	{
		nb = -n;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr(n);
	if (n == -2147483648)
		return (11);
	return (i);
}

static void	printout(unsigned int nb)
{
	if (nb > 9)
		put_unsigned(nb / 10);
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
		return ;
	}
	ft_putchar(nb % 10 + 48, 1);
}

int	put_unsigned( unsigned int nb)
{
	unsigned int	i;

	printout(nb);
	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
