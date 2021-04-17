/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argumentos_treino.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:58:49 by dpadovan          #+#    #+#             */
/*   Updated: 2021/04/16 15:21:21 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//reforço sobre argumentos = argc e argv

int main(int argc, char **argv)
{
	//(void)argc;
	//(void)argv;
	printf("Imprimindo total de argumentos: %d\n",argc);
	printf("Imprimindo valores do argumento: %s, %s\n",argv[0], argv[1]);
	return (0);
}
