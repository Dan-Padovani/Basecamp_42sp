#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
char origem[] = "Basecamp 42";
char destino[12];

printf("Origem = %s\n", origem);

ft_strcpy(destino, origem);

printf("Saida = %s\n", destino);
}
