#include <iostream>

int main() {
    int a = 8; // 1000 in binary
    int b = 9; // 1001 in binary

    while (b != 0) {
        int carry = (a & b) << 1;
        printf("Carry: %d\n", carry);
        a = (a ^ b) % 256;
        printf("A after XOR: %d\n", a);
        b = carry % 256;
        printf("B after carry: %d\n", b);
    }

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}