// #include <stdio.h>
// #include <stdint.h>
// #include <time.h>
// #include <unistd.h>
// #include <stdbool.h>

// struct can_data_8B
// {
//   uint16_t addres;
//   uint8_t data[8];

// };
// struct can_data_7B
// {
//   uint16_t addres;
//   uint8_t data[7];

// };
// struct can_data_6B
// {
//   uint16_t addres;
//   uint8_t data[6];

// };
// struct can_data_4B
// {
//   uint16_t addres;
//   uint8_t data[4];

// };
// struct can_data_2B
// {
//   uint16_t addres;
//   uint8_t data[2];

// };
// struct can_data_1B
// {
//   uint16_t addres;
//   uint8_t data[1];

// };

// struct TT {
//     union {
//         struct {
//             //The order of these bits must match deprecated message flags for compatibility reasons
//             uint32_t extd: 1;           /**< Extended Frame Format (29bit ID) */
//             uint32_t rtr: 1;            /**< Message is a Remote Frame */
//             uint32_t ss: 1;             /**< Transmit as a Single Shot Transmission. Unused for received. */
//             uint32_t self: 1;           /**< Transmit as a Self Reception Request. Unused for received. */
//             uint32_t dlc_non_comp: 1;   /**< Message's Data length code is larger than 8. This will break compliance with ISO 11898-1 */
//             uint32_t reserved: 27;      /**< Reserved bits */
//         };
//         //Todo: Deprecate flags
//         uint32_t flags;                 /**< Deprecated: Alternate way to set bits using message flags */
//     };
//     uint32_t identifier;                /**< 11 or 29 bit identifier */
//     uint8_t data_length_code;           /**< Data length code */
//     uint8_t data[8];    /**< Data bytes (not relevant in RTR frame) */
// };

// struct BMS_critical_msg
// {

//   uint16_t base_addres;
//   struct can_data_1B Highest_temp;
//   struct can_data_1B Highest_Thermistor_ID;

//   struct can_data_4B Lowest_temp;
//   struct can_data_4B Flags1;

//   struct can_data_2B Flags2;
//   struct can_data_2B Flags3;

// };
// struct XYZ
// {
//   uint16_t base_addres;
//   struct can_data_1B Highest_temp;
//   struct can_data_1B Highest_Thermistor_ID;

//   struct can_data_4B Lowest_temp;
//   struct can_data_4B Flags1;

//   struct can_data_2B Flags2;
//   struct can_data_2B Flags3;
// };
// void delay(int number_of_seconds)
// {
//     // Converting time into milli_seconds
//     int milli_seconds = 1000 * number_of_seconds;

//     // Storing start time
//     clock_t start_time = clock();

//     // looping till required time is not achieved
//     while (clock() < start_time + milli_seconds)
//         ;
// }
// int main(){
//   struct BMS_critical_msg bms;
//   struct TT tt={
//     .identifier=0x120,
//     .data = 0x6
//     };
//   struct XYZ zyx={
//     .base_addres=0x200
//   };
//   bms.base_addres= 0x100;

//   uint16_t recived =0x100;
//   uint16_t input, XX;
//   bool match=false;
//   uint16_t count=0;
//   if (tt.identifier <= 0x120 && tt.identifier >= 0x100)
//   {
//     count=0x100;
//     while (!match){
//       if(bms.Highest_temp.addres==count)
//       {
//         printf("In %hx\n",count);
//                 match=true;
//       }
//       else {
//         count++;
//       }

//     }
//     switch (tt.identifier)
//   {
//     case 0x100:
//     .data=
//       printf("In 0x100");
//       break;
//     case 0x200:
//     printf("In 0x200");
//       printf("In default");
//       break;
//     default:
//       printf("In default");
//       break;
//   }
//   }

//     // printf("Enter Input:");
//     // fflush(stdout);
//     // scanf("%u\n",&input );
//     // getchar();
//     // printf("Enter XX: ");
//     // fflush(stdout);
//     // scanf("%hu\n", &XX);
//     // getchar();

//     // printf("INPUT: %u, XX: %hx\n",input,XX);
//     // fflush(stdout);

// // printf("%.*x\n",1024, *payload );
// return 0;
// }
