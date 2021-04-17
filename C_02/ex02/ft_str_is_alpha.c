/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:20:57 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/11 13:41:24 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 65 || str[count] > 90) &&
		(str[count] < 97 || str[count] > 122))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
