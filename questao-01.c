#include <stdio.h>

void printArray(int array[], int lista) {
    for (int i = 0; i < lista; i++) {
        printf("%d", array[i]);
        if (i < lista - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printArray(numeros, 10);

    int resultados[10];
    int lista2 = 10;

    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < lista2 - 1; i++) {
            resultados[i] = numeros[i] + numeros[i + 1];
        }
        printArray(resultados, lista2 - 1);
        for (int i = 0; i < lista2 - 1; i++) {
            numeros[i] = resultados[i];
        }
        lista2--;
    }

    return 0;
}