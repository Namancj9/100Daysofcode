/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

*/
#include <stdio.h>
int main(){
    
    float units, bill;
    
    printf("Enter number of Units consumed:");
    scanf("%f",&units);
    
    if(units > 300.0 ){
        bill =(100 * 5) + (100 * 7) + (100 * 10) + ((units - 300)*12);
        printf("Your Electricity bill is: Rs. %.2f", bill);
    }
    else if (units > 200.0){
        bill = (100 * 5) + (100 * 7) + ((units - 200)*10);
        printf("Your Electricity bill is: Rs. %.2f", bill);
    }
    else if (units > 100.0){
        bill = (100 * 5) + ((units - 100)*7);
        printf("Your Electricity bill is: Rs. %.2f", bill);
    }
    else if (units >=1){
        bill = units * 5;
        printf("Your Electricity bill is: Rs. %.2f", bill);
    }
        
    return 0;
}
