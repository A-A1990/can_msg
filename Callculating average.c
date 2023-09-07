// #include <stdio.h>
// #include <stdint.h>
// #define BMS_critical_lower_bounds 0x100

// #define BMS_critical_upper_bounds 0x127

// #define BMS_low_lower_bounds 0x340
// #define BMS_low_upper_bounds 0x396

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

// struct BMS_critical_msg
// {

//   struct can_data_1B Highest_temp;
//   struct can_data_1B Highest_Thermistor_ID;

//   struct can_data_4B Lowest_temp;
//   struct can_data_4B Flags1;

//   struct can_data_2B Flags2;
//   struct can_data_2B Flags3;


// };

// struct BMS_critical_msg BMS_critical_payload;



// int count[9] = { 0 };
// int sum[9] = { 0 };

// int can_addresses[10]={0x100};


// double calculateAverage (int numbers, int count)
// {


//   return (double) numbers / count;
// }



// int
// main ()
// {
//   uint8_t Recived[] = { 0x45, 0x8d, 0x5e, 0xf0, 0xc7, 0x65 };
//   int length = sizeof (Recived) / sizeof (Recived[0]);
//   int number;			// Variable to store the entered number
//   double FirstNum = 0, SecondNum = 0;
//   printf ("Enter integers (enter a non-integer value to stop):\n");




//   while (scanf ("%d", &number) == 1)
//     {

//       switch (number)
// 	{
//     ///////////////////////////////////////// Can we do somthing like this? ////////////////////////
//   //case can_addresses[0]:
// 	case 0x100:


// 	  for (int i = 0; i < length; i++)
// 	    {

// 	      //////////////// ? ///////////////

//         }

//       break;

//     case 0x126:

// 	  for (int i = 0; i < 8; i++)
// 	    {
// 	      BMS_critical_payload.Highest_temp.data[i] = Recived[i];
// 	      printf ("%x\n", BMS_critical_payload.Highest_temp.data[i]);
// 	    }

// 	  break;

// 	default:

// 	}





//     }


//   return 0;
// }