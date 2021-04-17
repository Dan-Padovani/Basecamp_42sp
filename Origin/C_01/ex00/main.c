#include <stdio.h>

void	ft_ft(int *nbr);

int 	main()
{
	int one;

	one = 111;
	

	printf("Meu valor: ");
	printf("%d\n", one);
	printf("Chamando a função\n");
	ft_ft(&one);
	printf("%d\n", one);
}
