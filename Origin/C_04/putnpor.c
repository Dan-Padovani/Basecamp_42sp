#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

void ft_revstr(int nb)
{
char numb1[11];
char numb2[11];
int count1;
int count2;
count1 = 0;
count2 = 0;


while (nb > 0)
    {        
      numb1[count1] = nb % 10 + '0';
      nb = nb/10;
      count1++;
    }
        
      count1--;
      while (count1 >= 0)
      {
        numb2[count2] = numb1[count1];
        count2++;
        count1--;
      }
      numb2[count2] ='\0';
    ft_putstr(numb2);
}


void    ft_putnbr(int nb)
{
  if (nb == -2147483648)
      write(1, "-2147483648", 11);        
  if (nb == 0)
      write(1, "0", 1);        
  if (nb < 0)
      {
        nb = nb * -1;
        write(1, "-", 1);
      }
  if (nb > 0)
     while (nb > 0)
    {        
      numb1[count1] = nb % 10 + '0';
      nb = nb/10;
      count1++;
    }
        
      count1--;
      while (count1 >= 0)
      {
        numb2[count2] = numb1[count1];
        count2++;
        count1--;
      }
      numb2[count2] ='\0';
    ft_putstr(numb2);
}

int main()
{
    ft_putnbr(-2147483647);    
}