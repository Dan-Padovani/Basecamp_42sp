#include <stdio.h>

void	ft_swap(int *a, int *b);

int 	main()
{
	int c;
	int d;
	
	c = 10;
	d = 20;

	printf("Meus valores: \n");
	printf("%d, %d\n", c, d);
	printf("Chamando a função\n");
	ft_swap(&c, &d);
	
	printf("%d, %d\n", c, d);
	return(0);
}