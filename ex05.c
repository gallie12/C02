#include <unistd.>

int ft_str_is_uppercase.c(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
       if (str[i] < 65 || (str[i] > 90)
       {
           return 0;
           
       }
       
       else
       {
           return 1;
       }
       
    }
}