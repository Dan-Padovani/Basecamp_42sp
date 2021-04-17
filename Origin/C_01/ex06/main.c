#include <stdio.h>

int		ft_strlen(char *str);

int 	main()
{
	char *str;
	int text;

	str = "Daniel";
	text = ft_strlen(str);

	printf("%d\n", text);
}
