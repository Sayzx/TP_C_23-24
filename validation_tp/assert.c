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


char leet (char * array){
    for (int i = 0; i < strlen(array); i++){
        switch (array[i]){
            case 'a':
                array[i] = '4';
                break;
            case 'e':
                array[i] = '3';
                break;
            case 'i':
                array[i] = '!';
                break;
            case 'l':
                array[i] = '1';
                break;
            case 'o':
                array[i] = '0';
                break;
            case 's':
                array[i] = '5';
                break;
            case 't':
                array[i] = '7';
                break;
            default:
                if (array[i] < 97 || array[i] > 122){
                    array[i] = array[i];
                }else{
                    array[i] = array[i] - 32;
                }
        }
    }
    return *array;
}


char* vls(const char* input) {
    int length = strlen(input);
    char* result = (char*)malloc(length + 1);
    if (result == NULL) {
        perror("Erreur d'allocation de mémoire");
        exit(1);
    }

    int j = 0;
    for (int i = 0; i < length; i++) {
        if (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u' &&
            input[i] != 'A' && input[i] != 'E' && input[i] != 'I' && input[i] != 'O' && input[i] != 'U') {
            result[j] = input[i];
            j++;
        }
    }
    result[j] = '\0';
    return result;
}

