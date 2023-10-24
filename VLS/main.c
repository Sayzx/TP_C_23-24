#include <stdio.h>
#include <stdlib.h>

int strlen(const char *s) {
    int i = 0;
    for (; *s != '\0'; s++) {
        i++;
    }
    return i;
}

void vls(const char *s) {
    int len = strlen(s), cpt = 0;
    char *res = malloc(len * sizeof(char));
    for (int i = 0; i < len; i++) {
        switch (s[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;
            default:
                res[cpt] = s[i];
                cpt++;
        }
    }
    res[cpt] = '\0';
    printf("%s\n", res);
    free(res);
}

int main() {
    const char *s = "Hello, World!\n";
    vls(s);
    return 0;
}
