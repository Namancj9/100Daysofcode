#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(n < 2) {
        printf("Array must have at least two elements.");
        return 0;
    }

    largest = secondLargest = -2147483648; // Minimum integer value

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648)
        printf("There is no second largest element (all elements are equal).");
    else
        printf("Second largest element: %d", secondLargest);

    return 0;
}

