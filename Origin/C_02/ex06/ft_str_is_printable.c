/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:24:48 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/11 14:03:30 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 32) || (str[count] > 127))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
