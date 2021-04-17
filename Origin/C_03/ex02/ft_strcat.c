/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:42:19 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/13 19:42:11 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int count1;
	int count2;

	count1 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	count2 = 0;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}
