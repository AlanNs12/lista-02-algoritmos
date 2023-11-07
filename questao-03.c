#include <stdio.h>
#include <string.h>

int main() {
    int matrixA[4][4], matrixB[4][4], resultMatrix[4][4];
    char operation[5];

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            scanf("%d", &matrixA[row][col]);
        }
    }

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            scanf("%d", &matrixB[row][col]);
        }
    }

    scanf("%s", operation);

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (strcmp(operation, "soma") == 0) {
                resultMatrix[row][col] = matrixA[row][col] + matrixB[row][col];
            } else if (strcmp(operation, "sub") == 0) {
                resultMatrix[row][col] = matrixA[row][col] - matrixB[row][col];
            } else if (strcmp(operation, "mult") == 0) {
                resultMatrix[row][col] = 0;
                for (int mult = 0; mult < 4; mult++) {
                    resultMatrix[row][col] += matrixA[row][mult] * matrixB[mult][col];
                }
            }
        }
    }


    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%4d", resultMatrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
