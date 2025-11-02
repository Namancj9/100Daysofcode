#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator++;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
