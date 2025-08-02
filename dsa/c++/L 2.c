#include <stdio.h>

int main() {
    // Declare and initialize a 3x3 null matrix using a 2D array
    int nullMatrix[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    // Display the matrix
    printf("3x3 Null Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", nullMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
