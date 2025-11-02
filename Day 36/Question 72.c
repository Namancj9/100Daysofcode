#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j]; 
        }
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
