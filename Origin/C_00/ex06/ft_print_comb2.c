/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 03:55:00 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/06 21:11:53 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	char numb1;
	char numb2;

	numb1 = 0;
	while (numb1 <= 98)
	{
		numb2 = numb1 + 1;
		while (numb2 <= 99)
		{
			ft_putchar2(numb1 / 10 + '0', numb1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar2(numb2 / 10 + '0', numb2 % 10 + '0');
			if (numb1 < 98)
			{
				write(1, ", ", 2);
			}
			numb2++;
		}
		numb1++;
	}
}
