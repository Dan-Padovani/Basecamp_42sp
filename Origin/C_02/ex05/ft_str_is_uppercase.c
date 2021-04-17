/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:24:42 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/11 13:53:36 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 65) || (str[count] > 90))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
