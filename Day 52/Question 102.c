#include <stdio.h>

int main() {
    int n, x, i, low, high, mid, ans = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        
        if(arr[mid] >= x) {
            ans = mid;      
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    
    printf("Ceil index: %d\n", ans);
    
    return 0;
}
