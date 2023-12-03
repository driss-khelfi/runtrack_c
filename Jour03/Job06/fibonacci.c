#include <stdio.h>

int my_fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        int result;

        for (int i = 2; i <= n; i++) {
            result = a + b;
            a = b;
            b = result;
        }

        return result;
    }
}

int main() {
    int n = 8;
    int result = my_fibo(n);

    printf("%d", result);

    return 0;
}
