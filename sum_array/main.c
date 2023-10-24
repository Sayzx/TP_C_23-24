#include <stdio.h>

int sum_array(int *array, int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    return sum;
}

int main() {
    int tab[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; // 10 premier nombre premier
    printf("La somme des 10 premiers nombre premier est %d\n", sum_array(tab, 10));
}
