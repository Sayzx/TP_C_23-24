#include <stdio.h>

void Swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("Apres Swap : a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 42;
    int b = 1337;
    printf("Avant Swap : a = %d, b = %d\n", a, b);
    Swap(&a, &b);
}
