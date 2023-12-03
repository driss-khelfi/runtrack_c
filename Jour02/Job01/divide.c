#include<stdio.h>

int divide(int *val)
{
    int i = 2;
   *val = *val / i;
   return 0;
}

int main()
{
    int val = 10;  
     divide(val);

    printf("val = %d\n", val);
}

