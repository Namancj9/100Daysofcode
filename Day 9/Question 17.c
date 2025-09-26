/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.
*/
#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, disc, root1, root2;
    
    printf("ax^2+bx+c=0 \n");
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    }
    
    disc = b*b - 4*a*c;
    
    if (disc > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("Roots are real and different: %.2lf and %.2lf\n", root1, root2);
    }
    else if (disc == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf and %.2lf\n", root1, root2);
    }
    else {
        printf("Roots are complex");
    }
        
    return 0;
}
