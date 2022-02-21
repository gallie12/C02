#include <unistd.>

int ft_str_is_numeric.c(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
       if (str[i] < 97 || (str[i] > 122)
       {
           return 0;
           
       }
       
       else
       {
           return 1;
       }
       
    }
}