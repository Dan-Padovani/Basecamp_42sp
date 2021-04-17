#include <stdio.h>

int		ft_str_is_numeric(char *str);

int main()
{
char str1[] = "596";
char str2[] = "AbCdEfG";
char str3[] = "012356789";
char str4[] = "a23567";
char str5[] = "";


printf("teste1 = %s\n", str1);
printf("teste2 = %s\n", str2);
printf("teste3 = %s\n", str3);
printf("teste4 = %s\n", str4);
printf("teste5 = %s\n", str5);

printf("Chamando a funcao\n");

printf("%d\n", ft_str_is_numeric(str1));
printf("%d\n", ft_str_is_numeric(str2));
printf("%d\n", ft_str_is_numeric(str3));
printf("%d\n", ft_str_is_numeric(str4));
printf("%d\n", ft_str_is_numeric(str5));

}
