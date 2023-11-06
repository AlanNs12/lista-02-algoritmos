#include <stdio.h>

    void somando(int array[], int numeros){
        while (numeros > 1){
            for(int i = 0; i > numeros - 1; i += 2) {
                array[i] = array[i] + array[i + 1];
            }
            numeros = (numeros + 1) / 2;
            for (int i = 0; i < numeros; i++) {
                printf("%d", array[i]);
                if(i < numeros - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    int main(){
        int array[10];

        for (int i = 0; i < 10; i++) {
            scanf("%d", &array[i]);
        }
        for (int i = 0; i < 10; i++) {
            printf("%d", array[i]);
            if (i < 9) {
                printf(" ");
            }
        }
        printf("\n");

        somando(array, 10);

        return 0;
    }