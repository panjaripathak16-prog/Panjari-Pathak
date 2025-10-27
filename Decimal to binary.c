#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Binary: 0");
    else {
        printf("Binary: ");
        decimalToBinary(num);
    }

    return 0;
}

