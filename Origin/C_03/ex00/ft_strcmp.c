/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:42:19 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/13 17:19:24 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while ((s1[count] == s2[count]) && (s1[count] != '\0' || s2[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
