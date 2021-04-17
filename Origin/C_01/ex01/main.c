#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main()
{
	int nbr;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	
	nbr = 999999;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	printf("Valor atual da variavel: ");
	printf("%d\n", *********ptr9);
	printf("Chamando a funcao = ");
	ft_ultimate_ft(ptr9);
	printf("%d\n", *********ptr9);

	return(0);
}