/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
uint16_t BMS_critical_bounds[2] = [0x100, 0x127];
uint16_t BMS_low_bounds[2] = [0x340, 0x396];
uint32_t = 0x450;
uint8_t = 0x88;
uint8_t = 0x450;


double calculateAverage(int numbers, int count) {
    
    
    return (double)numbers / count;
}

int main() {
    
    int count[100] = 0;     // Variable to store the count of numbers
    int sum[100]=0;
    int number;        // Variable to store the entered number
    
    printf("Enter integers (enter a non-integer value to stop):\n");
    
    printf("uint16_t BMS_critical_bounds X %x",BMS_critical_bounds[0]);
    printf("uint16_t BMS_critical_bounds u %u",BMS_critical_bounds[0]);
    while (scanf("%d", &number) == 1) {
        
        
        sum=sum+number;
        
        count++;
        
        double average = calculateAverage(sum, count);
        
        printf("Average: %.2f\n", average);
        
    }
    
    return 0;
}

