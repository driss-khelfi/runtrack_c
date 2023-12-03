#include <stdio.h>
int char_is_digit(char c)
{
    char *str = "0123456789";
    int i =0;
    while (str[i] !='\0')
    {
        if (c == str[i])
        {
            return(1);
        }
        ++i;
    }
    return(0);
}
int str_is_digit(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!char_is_digit(str[i]))
        {
            return 0;
        }
        ++i;
    }
    return 1;
}

int main()
{
    char *str = "012345";
    int result = str_is_digit(str);

    if (result == 1)
    {
        printf("The string %s consists of digits only.\n", str);
    }
    else
    {
        printf("The string %s contains non-digit characters.\n", str);
    }

    return 0;
}
