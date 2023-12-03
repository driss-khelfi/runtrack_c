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

int main()
{
    char *c = '1';
    int result = char_is_digit(c);
    if (result == 1)
    {
        printf("The character %c is a digit\n", c);
    }
    else
    {
        printf("The character %c is not a digit\n", c);
    }
    char_is_digit(c);

}

