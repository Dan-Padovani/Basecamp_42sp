#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char ostring1[] = "ABgCDaaa";
	char ostring2[] = "ABgL";
	
	char string1[] = "ABgCDaaa";
	char string2[] = "ABgL";
	unsigned int n;
	n = 8;

	printf("\nChamando a funcao original\n\n");
	printf("Retorno = %d \n", strncmp(ostring1, ostring2, n));
	
		
	printf("\nChamando a funcao, agora vai!\n\n");
	printf("Retorno = %d \n", ft_strncmp(string1, string2, n));


}