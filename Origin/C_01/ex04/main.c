#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int c;
	int d;

	c = 20;
	d = 12;

	printf("div %d\n", c);
	printf("mod %d\n", d);

	ft_ultimate_div_mod(&c, &d);
	
	printf("div %d\n", c);
	printf("mod %d\n", d);
	
}