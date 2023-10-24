#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void leet(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case 'e':
            case 'E':
                str[i] = '3';
                break;
            case 'l':
            case 'L':
                str[i] = '1';
                break;
            case 'o':
            case 'O':
                str[i] = '0';
                break;
            case 't':
            case 'T':
                str[i] = '7';
                break;
        }
    }
}

char* vls(const char *str) {
    char *result = (char*)malloc(strlen(str) + 1);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    return result;
}
