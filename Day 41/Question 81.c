#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);;  

    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
