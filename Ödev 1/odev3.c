#include <stdio.h>

int main() {
    int a = 7, b = 15, swap;
    swap = a;
    a = b;
    b = swap;
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
