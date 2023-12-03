#include <stdio.h>

int my_fact(int n)
{
    int result=1;
    for (int i=n; i>0; i--)
    {
        result = result*i;
    }
    return result;
}       
int main()
{
    int n = 5;
    int result = my_fact(n);

    printf("%d", result);

    return 0;
}