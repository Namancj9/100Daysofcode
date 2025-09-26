/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/
#include <stdio.h>

int main() {
    int n;
    
    printf("enter a number: ");
    scanf("%d",&n);
    
    if (n >= 0) {
        if (n == 0){
            printf("The number is Zero\n");;
        }
        else{
            printf("The number is Positive\n");
        }
    }
    else {
        printf("The number is Negative\n");
    }
    return 0;
}
