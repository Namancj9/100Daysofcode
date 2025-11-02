#include <stdio.h>

int main() {
    int n, i, j, arr[100];
    int repeated = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements (with one repeated): ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                repeated = arr[i];
                break;
            }
        }
        if(repeated != -1)
            break;
    }

    if(repeated != -1)
        printf("Repeated element: %d\n", repeated);
    else
        printf("No repeated element found\n");

    return 0;
}
