#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main()
{
char ostr1[] = "abc";
char ostr2[] = "abc";
char ostr3[] = "";
char ostr4[] = "";
char ostr5[] = "azg";

char str1[] = "abc";
char str2[] = "abc";
char str3[] = "";
char str4[] = "";
char str5[] = "azg";

printf("Chamando funcao original\n");
printf("%d\n", strcmp(ostr1, ostr2));
printf("%d\n", strcmp(ostr1, ostr3));
printf("%d\n", strcmp(ostr3, ostr4));
printf("%d\n", strcmp(ostr1, ostr5));

printf("\nChamando minha funcao\n");

printf("%d\n", ft_strcmp(str1, str2));
printf("%d\n", ft_strcmp(str1, str3));
printf("%d\n", ft_strcmp(str3, str4));
printf("%d\n", ft_strcmp(str1, str5));

}
