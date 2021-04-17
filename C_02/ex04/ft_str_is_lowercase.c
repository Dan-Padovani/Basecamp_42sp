/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:24:35 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/11 13:51:01 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 97) || (str[count] > 122))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
