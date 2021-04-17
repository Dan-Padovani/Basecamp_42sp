/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:24:53 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/10 22:28:54 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 97) && (str[count] <= 122))
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
