#include <stdio.h>

char *itoa_hex(int n)
{
    char *result = malloc(100);
    int i = 0;
    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            result[i] = temp + 48;
            i++;
        }
        else
        {
            result[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    result[i] = '\0';
    return result;
}

int main()
{
    int n = 54;
    char *result = itoa_hex(n);

    printf("%s", result);

    return 0;
}