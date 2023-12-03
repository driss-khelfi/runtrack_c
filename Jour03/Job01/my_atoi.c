#include <stdio.h>
#include <stdlib.h> 

/*
Vous devez implémenter la fonction my_atoi (dans un fichier my_atoi.c) qui va prendre
en paramètre une chaîne de caractères, et qui doit la convertir en int.
*/
int my_atoi(char *str)
{
   
    int j = 0;
    for(int i=0; str[i]!='\0'; ++i)
    {
        j = j*10+str[i] - '0';
    }
    return j;
}

int main()
{
   
    char str[]="abcd";
    int val = my_atoi(str);
    printf("%d", val);
    return 0;
}
