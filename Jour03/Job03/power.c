#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent) {
    int result = 1;
    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int n = 5;
    int exponent = 3;
    int result = power(n, exponent);

    printf("%d", result);

    return 0;
}
