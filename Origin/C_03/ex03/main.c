#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char ostring1[50] = "ABCDEF";
	char ostring2[] = "+GHIJKLMNOPQRSTUVXWYZ";
	
	char string1[50] = "ABCDEF";
	char string2[] = "+GHIJKLMNOPQRSTUVXWYZ";
	unsigned int control;

	control = 21;

	printf("\nConcatenando com strncat ORIGINAL\n");
	printf("String 1 = %s\n", ostring1);
	printf("String 2 = %s\n", ostring2);
	printf("Retorno = %s\n\n", strncat(ostring1, ostring2, control));

	printf("Bora concatenar com a minha funcao\n");
	printf("String 1 = %s\n", string1);
	printf("String 2 = %s\n", string2);

	printf("Retorno = %s\n\n", ft_strncat(string1, string2, control));

}
