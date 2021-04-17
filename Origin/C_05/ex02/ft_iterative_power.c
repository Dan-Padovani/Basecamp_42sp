/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:21:00 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/16 14:13:06 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int amount;
	
	amount = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
		{
		amount *= nb;
		power--;
		}
		return (amount);	
}