
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main() 
{
  int vet[5] = {1,2,3,4,5};
  int size = 5;
  int count = 0;
  
  while (count < size)
  {
    printf("vet %d\n", vet[count]);
    count++;
  }
  
  ft_rev_int_tab(vet, size);
  
  printf("Invertendo\n");
  
  count = 0;
  while (count < size)
  {
    printf("vet %d\n", vet[count]);
    count++;
  }
  
  return 0;
}