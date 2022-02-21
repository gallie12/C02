#include <unistd.>

int ft_str_is_numeric.c(char *str)
{
    int i=0;
    while(*str[i] != '\0')
    {
       if (*str[i] < 49 || *str[i] > 57)
       {
           return 0;
           
       }
       
       else
       {
           return 1;
       }
       i++;
    }
}