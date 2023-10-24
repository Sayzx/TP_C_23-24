#include <stdio.h>

// tp 2 Factoriel


int factoriel(int n) {
    int i;
    int res = 1;
    for (i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int main() {
    int n;
    printf("Entrer un nombre a mettre en factoriel : ");
    scanf("%d", &n);
    printf("Le factoriel de %d est %d\n", n, factoriel(n));
    return 0;
}


