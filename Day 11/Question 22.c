/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>
int main(){
    
    float  profit, loss, sp, cp, loss_p, profit_p;
    
    printf("Enter Cost price:");
    scanf("%f",&cp);
    printf("Enter Selling price:");
    scanf("%f",&sp);
    
    if(sp > cp) {
        profit = sp - cp;
        profit_p = (profit/cp)*100;
        printf("Profit Percentage is %.2f%%",profit_p);
    }
    
    else if(cp > sp){
        loss = cp - sp;
        loss_p = (loss/cp)*100;
        printf("Loss Percentage is %.2f%%",loss_p);
    }
    
    else{
        printf("No profit or loss");
    }
    
    return 0;
}
