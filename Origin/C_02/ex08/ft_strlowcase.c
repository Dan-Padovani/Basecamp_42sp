/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:24:59 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/10 22:34:39 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 65) && (str[count] <= 90))
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
