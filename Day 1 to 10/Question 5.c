/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>
int main(){
    float f, c;
    printf("Enter temperature in celcius:");
    scanf("%f",&c);
    f = (c * 9/5 + 32);
    printf("Temperature in fahrenheit:%.2f",f);
    return 0;
}
