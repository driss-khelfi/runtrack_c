#include <stdio.h>
#include <math.h>

float my_sqrt(int base) {
    return sqrt(base);
}

int main() {
    int n = 25;
    float result = my_sqrt(n);

    printf("%.2f", result);

    return 0;
}
