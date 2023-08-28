-/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#define BMS_critical_lower_bounds 0x100
#define BMS_critical_upper_bounds 0x127

#define BMS_low_lower_bounds 0x340
#define BMS_low_upper_bounds 0x396

struct can_data {
  uint16_t addres;
  uint8_t data[];
  
};

struct msg_2B {
  uint16_t addres;
  uint16_t data;
};



int count[9] = {0};
int sum  [9] = {0};
unsigned long long 



double calculateAverage(int numbers, int count) {
    
    
    return (double)numbers / count;
}

int main() {
    int number;        // Variable to store the entered number
    double FirstNum=0 , SecondNum=0;
    printf("Enter integers (enter a non-integer value to stop):\n");
    
    printf("uint16_t BMS_critical_bounds X %x \n",BMS_critical_bounds[1]);
    printf("uint16_t BMS_critical_bounds u %u \n",BMS_critical_bounds[1]);


    while (scanf("%d", &number) == 1) {
        
        
        if (number >= BMS_critical_lower_bounds && number <= BMS_critical_upper_bounds){
            sum[0]= sum[0]+number;
            count[0]=count[0]+1;
            printf("Sum: %d , \ncount: %d \n",sum[0],count[0]);
            
            switch(number){
                
                case 0x127:
                printf("Number %d \n",number);
                break;
                
                
            }
            
        }
        
        
        else if(number >= BMS_low_lower_bounds && number <= BMS_low_upper_bounds){
            sum[1]= sum[1]+number;
            count[1]=count[1]+1;
        }
        
        else if (number==-1){
            FirstNum  = calculateAverage(sum[0],count[0]);
            SecondNum = calculateAverage(sum[1],count[1]);
            
            
            printf("\nFirstNum = %f \nSecondNum = %f",FirstNum,SecondNum);
        }
        
        
    }
    
    
    return 0;
}

