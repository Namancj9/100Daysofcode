#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];
    int curr_sum = arr[0];

    for (int i = 1; i < n; i++) {

        if (curr_sum + arr[i] > arr[i])
            curr_sum = curr_sum + arr[i];
        else
            curr_sum = arr[i];

        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }

    printf("Maximum subarray sum: %d\n", max_sum);
    return 0;
}
