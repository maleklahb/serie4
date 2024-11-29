#include <stdio.h>
#include <math.h>

void main() {
    int n, p,c;
    printf("Entrez un entier n : ");
    scanf("%d", &n);
    printf("Entrez un entier p : ");
    scanf("%d", &p);
    int x = n + 10 * p;
    int compteur = 0;
    for (int i = n; i <= x; i++) {
        printf("%d ", (int)pow(i, 3));
        c++;
        if (c % p == 0) {
            printf("\n");
        }
    };
}
