#include <stdio.h>
void main() {
    int n, Un, i;
    do {
        printf("Entrez un entier n  ");
        scanf("%d", &n);
    } while (n < 10000);
     Un = n;
    printf("Les cinq premiers termes de la suite de Syracuse sont :\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", Un);
        if (Un % 2 == 0) {
            Un = Un / 2;  
        } else {
            Un = 3 * Un + 1; 
        }
    }
}
