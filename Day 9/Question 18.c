/*
Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
#include <stdio.h>
#include <math.h>

int main() {
    
    float a;
    
    printf("Enter your percentage: ");
    scanf("%f", &a);
    
    if (a <= 100 && a >=90){printf("Grade A\n");}
    else if (a <= 89 && a >=80){printf("Grade B\n");}
    else if (a <= 79 && a >=70){printf("Grade C\n");}
    else if (a <= 69 && a >=60){printf("Grade D\n");}
    else {printf("Grade A\n");}
    
    return 0;
}
