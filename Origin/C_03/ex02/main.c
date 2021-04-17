#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char ostr1[] = "Agora";
	char ostr2[] = " vai!";
	
	char str1[] = "Agora";
	char str2[] = " vai!";

	printf("\nFuncao ORIGINAL\n");
	printf("\nValor string 1 = %s\n", ostr1);
	printf("Valor string 2 = %s\n", ostr2);
	printf("Concatenando: %s\nFim\n", strcat(ostr1, ostr2));

	printf("\n\nMINHA FUNCAO\n");
	printf("\nValor string 1 = %s\n", str1);
	printf("Valor string 2 = %s\n", str2);
	printf("Concatenando: %s\nFim\n\n", ft_strcat(str1, str2));

	return (0);
}
