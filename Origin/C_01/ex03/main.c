#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a1;
	int b1;
	int div;
	int rest;

	a1 = 20;
	b1 = 12;

	printf("Valor de A %d\n", a1);
	printf("Valor de B %d\n", b1);

	ft_div_mod(a1, b1, &div, &rest);

	printf("Div: %d\n", div);
	printf("Mod: %d\n", rest);

	return (0);
}
