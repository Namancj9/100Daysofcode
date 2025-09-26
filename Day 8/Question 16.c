/*
Q16. Write a program to input three numbers and find the largest among them using if–else.

*/
#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter another number: \n");
    scanf("%d", &b);
    printf("Enter another number: \n");
    scanf("%d", &c);
    
    if (a > c && a > b){
        printf("%d is largest", a);
    }
    if (c > b && c > a){
        printf("%d is largest", c);
    }
    else{
        printf("%d is largest", b);
    }

    return 0;
}
