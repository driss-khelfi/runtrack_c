#include <stdio.h>
#include <stdlib.h>

char** split(char* c, int* count)
{
    *count = 1;
    for (int i = 0; c[i] != '\0'; ++i)
    {
        if (c[i] == ' ' || c[i] == '\n' || c[i] == '\n')
        {
            (*count)++;
        }
    }

    char** strArray = (char**)malloc(sizeof(char*) * (*count));

    int i = 0;
    int j = 0;

    while (c[i] != '\0')
    {
        strArray[j] = (char*)malloc(sizeof(char) * 100);
        int k = 0;

        while (c[i] != '\0' && c[i] != ' ' && c[i] != '\n' && c[i] != '\n')
        {
            strArray[j][k++] = c[i++];
        }
        strArray[j][k] = '\0';
        j++;

        if (c[i] == ' ' || c[i] == '\n' || c[i] == '\n')
        {
            i++;
        }
    }

    return strArray;
}

int main()
{
    char* c = "Hello World Have a Nice Day! \n";
    int count;
    char** splitArray = split(c, &count);

    printf("Original: %s\n", c);

    // Affiche chaque sous-chaîne
    for (int i = 0; i < count; ++i)
    {
        printf("Split %d: %s\n", i + 1, splitArray[i]);
    }

    // Libère la mémoire allouée
    for (int i = 0; i < count; ++i)
    {
        free(splitArray[i]);
    }
    free(splitArray);

    return 0;
}
