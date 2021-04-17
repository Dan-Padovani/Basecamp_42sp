/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:25:50 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/08 15:12:48 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int end;
	int count;

	end = size - 1;
	count = 0;
	while (count < end)
	{
		temp = tab[end];
		tab[end] = tab[count];
		tab[count] = temp;
		count++;
		end--;
	}
}
