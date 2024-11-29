#include <stdio.h>

void main() {
    int a, b, i, res;
    char op;

    printf("Donner a: ");
    scanf("%d", &a);
    printf("Donner b: ");
    scanf("%d", &b);
    printf("Donner l'operateur ( *, /, ^): ");
    scanf(" %c", &op);

    if (op == '*') {
        res = 0;
        for (i = 0; i < b; i++) {
            res += a;
        }
        printf("Le resultat de a * b est %d\n", res);
    } 
    else if (op == '/') {
        if (b == 0) {
            printf("Erreur");
        } else {
            res = a;
            i = 0;
            while (res >= b) {
                res -= b;
                i++;
            }
            printf("Le resultat de a / b est %d\n", i);
        }
    } 
    else if (op == '^') {  
        res = 1;
        for (i = 0; i < b; i++) {
            res *= a;
        }
        printf("Le resultat de a ^ b est %d\n", res);
    } 
    else {
        printf("invalide \n");
    }
}
