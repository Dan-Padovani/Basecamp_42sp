/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:25:45 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/06 22:14:25 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar3(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char numb1;
	char numb2;
	char numb3;

	numb1 = '0';
	while (numb1 <= '7')
	{
		numb2 = numb1 + 1;
		while (numb2 <= '8')
		{
			numb3 = numb2 + 1;
			while (numb3 <= '9')
			{
				ft_putchar3(numb1, numb2, numb3);
				if (numb1 != '7')
				{
					write(1, ", ", 2);
				}
				numb3++;
			}
			numb2++;
		}
		numb1++;
	}
}
