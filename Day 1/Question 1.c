/*Q1. Write a program to input two numbers and display their sum.*/
#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    sum = a + b;
    printf("Sum:%d", sum);
    return 0;
}
