#include <stdio.h>

int main() {
    int num_matrices;

    printf("\nWelcome!\n\n");

    // Input the number of matrices
    printf("Enter the number of matrices: ");
    scanf("%d", &num_matrices);

    int rows[num_matrices];
    int cols[num_matrices];
    int matrices[num_matrices][100][100];  // Assuming maximum size of matrices is 100x100

    // Input for each matrix
    for (int i = 0; i < num_matrices; i++) {
        printf("\nMatrix-%d\n", i + 1);
        scanf("%d %d", &rows[i], &cols[i]);
        for (int j = 0; j < rows[i]; j++) {
            for (int k = 0; k < cols[i]; k++) {
                scanf("%d", &matrices[i][j][k]);
            }
        }
    }

    // Check if multiplication is possible
    for (int i = 0; i < num_matrices - 1; i++) {
        if (cols[i] != rows[i + 1]) {
            printf("\nMatrix multiplication not possible. Number of columns in Matrix-%d should be equal to the number of rows in Matrix-%d.\n", i + 1, i + 2);
            return 1; // Return an error code
        }
    }

    // Matrix multiplication
    int result[100][100];  // Assuming maximum size of result matrix is 100x100
    int temp[100][100];    // Assuming maximum size of temp matrix is 100x100

    for (int i = 0; i < rows[0]; i++) {
        for (int j = 0; j < cols[0]; j++) {
            temp[i][j] = matrices[0][i][j];
        }
    }

    for (int m = 2; m <= num_matrices; m++) {
        for (int i = 0; i < rows[0]; i++) {
            for (int j = 0; j < cols[m - 1]; j++) {
                result[i][j] = 0;
                for (int k = 0; k < cols[m - 1]; k++) {
                    result[i][j] += temp[i][k] * matrices[m - 1][k][j];
                }
            }
        }

        // Copy result back to temp for next multiplication
        for (int i = 0; i < rows[0]; i++) {
            for (int j = 0; j < cols[m - 1]; j++) {
                temp[i][j] = result[i][j];
            }
        }
    }

    // Output the final result
    printf("\nMatrix product\n");
    for (int i = 0; i < rows[0]; i++) {
        for (int j = 0; j < cols[num_matrices - 1]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("\nThank you!!\n");
    return 0;
}
