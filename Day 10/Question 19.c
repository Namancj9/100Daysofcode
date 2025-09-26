/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
#include <stdio.h>

int main() {
    
    float a, b, c;
    
    printf("Enter all 3 sides: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a + b > c && b + c > a && a + c > b){
        
        if (a == b && b == c && c == a){
            printf("The triangle is Equilateral\n");
        }
        else if (a == b || b == c || c == a){
            printf("The triangle is Isosceles\n");
        }
        else {
            printf("The triangle is Scalene\n");
        }
    }    
    else {
        printf("The sides do not form a valid triangle.\n");
    }
    
    return 0;
}
