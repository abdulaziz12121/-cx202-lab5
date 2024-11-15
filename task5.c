#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void MatrixVectorMultiply(int rows, int cols, double A[MAX_ROWS][MAX_COLS], double x[MAX_COLS], double y[MAX_ROWS]) {
    for (int i = 0; i < rows; i++) {
        y[i] = 0; 
        for (int j = 0; j < cols; j++) {
            y[i] += A[i][j] * x[j]; 
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows :");
    scanf("%d", &rows);
    printf("Enter the number of columns:");
    scanf("%d", &cols);

    double A[MAX_ROWS][MAX_COLS];
    double x[MAX_COLS];
    double y[MAX_ROWS];

    printf("Enter the elements of the %dx%d matrix A:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Enter the %d elements of vector x:\n", cols);
    for (int i = 0; i < cols; i++) {
        printf("x[%d]: ", i);
        scanf("%lf", &x[i]);
    }

    MatrixVectorMultiply(rows, cols, A, x, y);

    printf("The resulting vector y = Ax is:\n");
    for (int i = 0; i < rows; i++) {
        printf("y[%d] = %.2lf\n", i, y[i]);
    }

    return 0;
}

