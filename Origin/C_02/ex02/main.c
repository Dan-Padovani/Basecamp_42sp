#include <stdio.h>

int		ft_str_is_alpha(char *str);

int main()
{
char src1[] = "ABC123";
char src2[] = "AbCdEfG";
char src3[] = "";


printf("teste1 = %s\n", src1);
printf("teste2 = %s\n", src2);
printf("teste3 = %s\n", src3);

printf("Chamando a funcao\n");

printf("%d\n", ft_str_is_alpha(src1));
printf("%d\n", ft_str_is_alpha(src2));
printf("%d\n", ft_str_is_alpha(src3));

}