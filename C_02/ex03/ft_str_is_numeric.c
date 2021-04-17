/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:24:30 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/11 13:45:01 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 48) || (str[count] > 57))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
