#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int i;

    printf("First 10 Fibonacci numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

