#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void delete_str_array(char **strs)
{
    for(int i = 0; strs[i] != NULL; i++)
    {
        free(strs[i]);
    }
    free(strs);
}

int main()
{
    char **strings = malloc(sizeof(char*) * 5);
    strings[0] = strdup("Bonjour");
    strings[1] = strdup("tout");
    strings[2] = strdup("le");
    strings[3] = strdup("monde");
    strings[4] = NULL;

    delete_str_array(strings);
    printf("test\n");

    return 0;
}