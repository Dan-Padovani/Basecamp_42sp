#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
char str1[] = "ABS";
char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char str3[] = "Z";
char str4[] = "dan";

printf("teste1 = %s\n", str1);
printf("teste2 = %s\n", str2);
printf("teste3 = %s\n", str3);
printf("teste4 = %s\n", str4);

printf("Chamando a funcao\n");

printf("%s\n", ft_strlowcase(str1));
printf("%s\n", ft_strlowcase(str2));
printf("%s\n", ft_strlowcase(str3));
printf("%s\n", ft_strlowcase(str4));

}
