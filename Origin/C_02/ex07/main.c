#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
char str1[] = "abs";
char str2[] = "abcdefghijklmnopqrstuvwxyz";
char str3[] = "z";
char str4[] = "dan";

printf("teste1 = %s\n", str1);
printf("teste2 = %s\n", str2);
printf("teste3 = %s\n", str3);
printf("teste4 = %s\n", str4);

printf("Chamando a funcao\n");

printf("%s\n", ft_strupcase(str1));
printf("%s\n", ft_strupcase(str2));
printf("%s\n", ft_strupcase(str3));
printf("%s\n", ft_strupcase(str4));

}
