#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void strtolower(char *str)
{
    while(*str != '\0')
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    char **strings = malloc(sizeof(char*) * 5);
    strings[0] = strdup("Bonjour");
    strings[1] = strdup("tout");
    strings[2] = strdup("le");
    strings[3] = strdup("monde");
    strings[4] = NULL;

    for (int i = 0; i < 4; i++)
    {
        strtolower(strings[i]);
        printf("%s\n", strings[i]);
    }
    printf("Conversion en minuscule effectuée\n");

    for (int i = 0; i < 4; i++)
    {
        free(strings[i]);
    }

    free(strings);

    printf("Mémoire libérée\n");

    return 0;
}
