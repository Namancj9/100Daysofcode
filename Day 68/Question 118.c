#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to n, with one missing): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;  
    printf("Missing number: %d\n", total - sum);

    return 0;
}
