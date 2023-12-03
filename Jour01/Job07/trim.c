#include <stdio.h>

int trim(char* c)
{
  int len = 0;
    while (c[len] != '\0')
    {
        ++len;
    }

    char *str = (char *)malloc(sizeof(char) * (len + 1));
    
    int i = 0;
    int j = 0;
    while (c[i] != '\0' && c[i] != ' ' && c[i] !=' \n')
    {
        str[i] = c[i];
        ++i;
        ++j;
    }
    str[j] = '\0';

    return str;  
}

int main()
{
    char *c = "Hello World! \n";
    char* trimmed = trim(c);

   printf("Original: %s\n", c);
   printf("Trimmed: %s\n", trimmed);

   free(trimmed);
}