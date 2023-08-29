#include <stdio.h>
#include <stdint.h>
#define BMS_critical_lower_bounds 0x100

#define BMS_critical_upper_bounds 0x127

#define BMS_low_lower_bounds 0x340
#define BMS_low_upper_bounds 0x396

struct can_data {
  uint16_t addres;
  uint8_t data[8];
  
};

struct can_data M126,M100,M110;



int count[9] = {0};
int sum  [9] = {0};




double calculateAverage(int numbers, int count) {
    
    
    return (double)numbers / count;
}



int main() {
    uint8_t Recived[] = {0x45,0x8d,0x5e,0xf0,0xc7,0x65}; 
    int length = sizeof(Recived) / sizeof(Recived[0]);
    int number;        // Variable to store the entered number
    double FirstNum=0 , SecondNum=0;
    printf("Enter integers (enter a non-integer value to stop):\n");
    



    while (scanf("%d", &number) == 1) {
        
        switch(number){
            case 0x100:
            
            
            for (int i = 0; i < length; i++) {
                
                M100.data[i]=Recived[i];
                printf("%x\n",M100.data[i]);
            }
            
            break;
            
            case 0x126:
            
            for (int i = 0; i < 8; i++) {
                M126.data[i]=Recived[i];
                printf("%f \n",M126.data[i]);
            }
            
            break;
            
            default:
            printf("de");
            
        }
        
        
        
        
        
    }
    
    
    return 0;
}

