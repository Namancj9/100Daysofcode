#include <stdio.h>

int main() {
    int a, b, temp_a, temp_b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp_a = a;
    temp_b = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    lcm = (temp_a * temp_b) / hcf;

    printf("LCM = %d\n", lcm);
    return 0;
}
