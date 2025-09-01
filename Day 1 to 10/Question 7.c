/*
Q7: Write a program to swap two numbers without using a third variable.
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
int main(){
    int a = 3, b = 5;
    printf("numbers before swapping : a = %d, b =%d\n", a ,b);
    a = b + a - a;
    b = a + b - b;
    printf("numbers after swapping : a = %d, b =%d", a ,b);
    return 0;
}
