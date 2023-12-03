#include<stdio.h>

int my_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
}

int main()
{
    char *src = "Hello World!";
    char dest[20];
    my_strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}