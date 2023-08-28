/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
uint16_t BMS_critical_bounds[2] = {0x100, 0x127};
uint16_t BMS_low_bounds[2] = { 0x340, 0x396};

int count[9] = {0};
int sum  [9] = {0};




double calculateAverage(int numbers, int count) {
    
    
    return (double)numbers / count;
}

int main() {
    int number;        // Variable to store the entered number
    printf("Enter integers (enter a non-integer value to stop):\n");
    
    printf("uint16_t BMS_critical_bounds X %x \n",BMS_critical_bounds[1]);
    printf("uint16_t BMS_critical_bounds u %u \n",BMS_critical_bounds[1]);

    printf("Number %u, %u\n",count[5],sum[3]); 

    while (scanf("%d", &number) == 1) {
        
        
        if (number >= BMS_critical_bounds[0] && number <= BMS_critical_bounds[1]){
            sum[0]= sum[0]+number;
            count[0]=count[0]+1;
            double calculateAverage(int numbers, int count) {
    
    
    return (double)numbers / count;
}

        }
        
        
        else if(number >= BMS_low_bounds[0] && number <= BMS_low_bounds[1]){
            
        }
        
        
    }
    
    
    return 0;
}

