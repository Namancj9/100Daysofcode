// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    
    double num1, num2, result;
    char opera;
    
    printf("Enter any operator (+, -, *, /, %): \n");
    scanf("%c", &opera);
    
    printf("Enter the numbers:\n");
    scanf("%lf %lf",&num1, &num2);
        
    switch (opera){
        case '+':
            result = num1 + num2;
            printf("%.2lf", result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2lf", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2lf", result);
            break;
        
        case '/':
            if (num2 !=0){
                result = num1 / num2;
                printf("%.2lf", result);
            }
            else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        
        case '%':
            if ((int)num2 !=0){
                result = (int)num1 % (int)num2;
                printf("%.2lf", result);
            }
            else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
        
    }
    return 0;
}
