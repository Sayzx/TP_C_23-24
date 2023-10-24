#include <stdio.h>

void leet(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '4';
        } else if (str[i] == 'e') {
            str[i] = '3';
        } else if (str[i] == 'i') {
            str[i] = '1';
        } else if (str[i] == 'o') {
            str[i] = '0';
        } else if (str[i] == 'u') {
            str[i] = '8';
        }
        printf("%c", str[i]);
    }
}

int main() {
    // Transformer Hello world, i’m speaking en leet speak
    char str[] = "Hello world, i’m speaking";
    leet(str);
    return 0;
}
