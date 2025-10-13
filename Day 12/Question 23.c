/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

*/
#include <stdio.h>
int main(){
    
    int days, fine;
    
    printf("Enter number of late days:");
    scanf("%d",&days);
    
    if(days > 30){
        printf("Your Membership has been Cancelled");
    }
    else if (days > 10){
        fine = (5 * 2) + (4 * 5) + ((days - 10)*6);
        printf("Your total fine is: Rs. %d", fine);
    }
    else if (days > 5){
        fine = (5 * 2) + ((days - 5)*4);
        printf("Your total fine is: Rs. %d", fine);
    }
    else if (days >=1){
        fine = days *2;
        printf("Your total fine is: Rs. %d", fine);
    }
    else{
        printf("No fine");
    }
        
    return 0;
}
