/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
float main(){
    float r, area, circumference;
    float pi = 3.14159;
    printf("Enter radius:");
    scanf("%f",&r);
    area = pi * (r*r);
    circumference = 2 * pi * r;
    printf("Area :%.2f\n", area);
    printf("circumference :%.2f", circumference);
    
    return 0;
}
