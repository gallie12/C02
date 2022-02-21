#include <unistd.h>
#include <stdio.h>
char *ft_strcapitalize (char *str)
{
    int i=0;
    while (str[i] != '\0')
    {
        if (i==0 && str[i] >='a'&& str[i] <= 'z')
        {
            str[i]-=32;
        }
        if (i !=0 && str[i] >='A'&& str[i] <= 'Z')
        {
            str[i]+=32;
        }
    i++;
    }
  return (str);  
}

