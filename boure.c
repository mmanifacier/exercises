#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    
    return(i);
}

int my_strcmp(char *str1, char *str2)
{
    int i=0;
    while(str1[i] == str2[i])
    {
        i++;
    }
    
    return(str1[i]-str2[i]);
}

int main(int ac, char **av)
{
    if (av && av[1])
    {
        printf("longueur de la chaine = %d\n", my_strlen(av[1]));
    }
    return (0);
}
