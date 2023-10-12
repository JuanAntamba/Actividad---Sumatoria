#include <stdio.h>

int main() {
    int n, j, s = 0;

    printf("Colocar el numero entero que se desea saber el numero de Gauss: ");
    scanf("%d", &n);

    for (j = 2 * n; j >= 1; j--) {
        s += j;
    }