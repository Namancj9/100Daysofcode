// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    
    int n;
    
    printf("enter a number: \n");
    scanf("%d", &n);
    
    if (n>=1){
        for (int i=1; i<=n; i++){
        printf("%d ",i);
        }
    }
    else {
        printf("Enter a valid number");
    }
    
    return 0;
}
