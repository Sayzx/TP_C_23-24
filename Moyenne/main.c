#include <stdio.h>

// TP2 Moyenne
int main() {
    int nbreleve, somme, note, i;
    printf("Combien d'eleves dans la classe ? ");
    scanf("%d", &nbreleve);
    for (i = 1; i <= nbreleve; i++) {
        printf("Note de l'eleve %d : ", i);
        scanf("%d", &note);
        somme += note;
    }
    printf("La moyenne est de %.2f\n", (float)somme / nbreleve);
    return 0;
}
