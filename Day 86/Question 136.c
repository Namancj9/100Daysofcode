#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation choice;
    int num1, num2, result;

    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
