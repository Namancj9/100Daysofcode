/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/
#include <stdio.h>

int main() {
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("%c is a vowel\n", c);
    }
    else{printf("%c is a constant\n", c);}
    
    return 0;
}
