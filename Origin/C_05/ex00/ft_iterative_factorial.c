/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:11:25 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/16 04:56:24 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fat;
	
	fat = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}	
	else if (nb < 0)
	{
		return (0);
	}	
	while (fat > 1)
	{
		nb = nb * (fat - 1);
		fat--;
	}	
		return (nb);
}