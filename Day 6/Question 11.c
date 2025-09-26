/* Q11: Write a program to input an integer and check whether it is even or odd using if–else.
*/
#include <stdio.h>

int main() {
    int n;
    
    printf("enter a number: ");
    scanf("%d",&n);
    
    if (n % 2 == 0) {
        printf("The number is Even\n");
    }
    else {
        printf("The number is Odd\n");
    }
    return 0;
}
