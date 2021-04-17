/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_counts.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:50:55 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/03 16:15:09 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_counts(void)
{
	char count;

	count = '0';
	while (count <= '9')
	{
		write(1, &count, 1);
		count++;
	}
}
