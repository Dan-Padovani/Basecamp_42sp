/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:31:27 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/15 20:25:53 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	numb[10];
	int		count;

	count = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0 && nb != -2147483648)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while (nb > 0)
	{
		numb[count] = nb % 10 + '0';
		nb = nb / 10;
		count++;
	}
	count--;
	while (count >= 0)
	{
		ft_putchar(numb[count]);
		count--;
	}
}
