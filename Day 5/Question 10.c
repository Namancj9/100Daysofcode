/* Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>
int main() {
    int total_seconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;            
    minutes = (total_seconds % 3600) / 60;   
    seconds = total_seconds % 60;            
    
    printf("Time: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
