#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int main()
{
char str1[] = "596";
char str2[] = "AbCdEfG";
char str3[] = "\0";
char str4[] = "abcfkz";

printf("teste1 = %s\n", str1);
printf("teste2 = %s\n", str2);
printf("teste3 = %s\n", str3);
printf("teste4 = %s\n", str4);

printf("Chamando a funcao\n");

printf("%d\n", ft_str_is_lowercase(str1));
printf("%d\n", ft_str_is_lowercase(str2));
printf("%d\n", ft_str_is_lowercase(str3));
printf("%d\n", ft_str_is_lowercase(str4));

}
