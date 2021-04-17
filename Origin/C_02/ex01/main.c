#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char src[] = "42sp";
	char dest[] = "Daniel";
	
	char src1[] = "42sp";
	char dest1[] = "Daniel";

	int n;

	n = 2;

	printf("\nFUNCAO ORIGINAL\n");

	strncpy(dest, src, n);
	printf("Src= %s\n", src);
	printf("Dest= %s\n\n", dest);
	


	printf("MINHA FUNCAO\n");
	
	ft_strncpy(dest1, src1, n);
	printf("Origem: %s\n", src1);
	printf("Destino: %s\n", dest1);

	return (0);

}
