#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char *src)
{
    int len = 0;
    while (src[len] != '\0')
    {
        ++len;
    }

    char *str = (char *)malloc(sizeof(char) * (len + 1));
    
    int i = 0;
    while (src[i] != '\0')
    {
        str[i] = src[i];
        ++i;
    }
    str[i] = '\0';

    return str;
}

int main()
{
    char *src = "Hello World!";
    char *dest = my_strdup(src);

    printf("Nouvelle chaîne : %s\n", dest);
    printf("Chaîne source : %s\n", src);

    // N'oublie pas de libérer la mémoire allouée avec malloc
    free(dest);

    return 0;
}
