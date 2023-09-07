// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>
// #include <stdint.h>

// struct can_data_1B
// {
//   uint16_t address;
//   uint8_t data[1];
// };

// struct can_data_4B
// {
//   uint16_t address;
//   uint8_t data[4];
// };

// struct BMS_critical_msg
// {
//   struct can_data_1B Highest_temp;
//   struct can_data_1B Highest_Thermistor_ID;
//   struct can_data_1B Lowest_temp;
//   struct can_data_1B Voltage;
//   struct can_data_1B Current;
// };

// struct VariableMapping
// {
//   uint16_t address;
//   void *variable;
// };

// int main()
// {
//   // Create an instance of the BMS_critical_msg structure
//   struct BMS_critical_msg bmsMsg;

//   // Set the addresses for the variables
//   bmsMsg.Highest_temp.address = 0x100;
//   bmsMsg.Highest_Thermistor_ID.address = 0x200;
//   bmsMsg.Lowest_temp.address = 0x300;
//   bmsMsg.Voltage.address = 0x400;
//   bmsMsg.Current.address = 0x500;

//   // Set some initial constant values for the variables
//   bmsMsg.Highest_temp.data[0] = 0;
//   bmsMsg.Highest_Thermistor_ID.data[0] = 0;
//   bmsMsg.Lowest_temp.data[0] = 0;

//   bmsMsg.Voltage.data[0] = 0;
//   bmsMsg.Current.data[0] = 0;

//   // Create an array of VariableMapping to map addresses to variables
//   struct VariableMapping variableMappings[] = {
//       // Variables that change during each iteration
//       {bmsMsg.Highest_temp.address, &(bmsMsg.Highest_temp)},
//       {bmsMsg.Highest_Thermistor_ID.address, &(bmsMsg.Highest_Thermistor_ID)},

//       // Constant variables
//       {bmsMsg.Lowest_temp.address, &(bmsMsg.Lowest_temp)},
//       {bmsMsg.Voltage.address, &(bmsMsg.Voltage)},
//       {bmsMsg.Current.address, &(bmsMsg.Current)}

//   };

//   // Set the random seed
//   srand(time(NULL));
//   int index = 0;
//   int counter = 0;
//   while (1)
//   {
//     index = rand() % 6;
//     // Simulate random inputs for the variables that change during each iteration
//     for (size_t j = 0; j < index; ++j)
//     {
//       index = rand() % 6;
//       // Generate a random data
//       uint8_t receivedData = rand() % 0xFF;

//       // Cast the variable pointer to the appropriate structure type
//       struct can_data_1B *variable = (struct can_data_1B *)(variableMappings[index].variable);

//       // Assign the received data to the appropriate variable
//       variable->data[0] = receivedData;
//     }

//     // Print the final values of all the variables
//     printf("Highest_temp: %d\n", bmsMsg.Highest_temp.data[0]);
//     printf("Highest_Thermistor_ID: %d\n", bmsMsg.Highest_Thermistor_ID.data[0]);
//     printf("Lowest_temp: %d %d %d %d\n",
//            bmsMsg.Lowest_temp.data[0],
//            bmsMsg.Lowest_temp.data[1],
//            bmsMsg.Lowest_temp.data[2],
//            bmsMsg.Lowest_temp.data[3]);
//     printf("Voltage: %d\n", bmsMsg.Voltage.data[0]);
//     printf("Current: %d\n", bmsMsg.Current.data[0]);
//     counter++;
//     if (counter == 10)
//     {
//       // Clear the data
//       bmsMsg.Highest_temp.data[0] = 0;
//       bmsMsg.Highest_Thermistor_ID.data[0] = 0;
//       bmsMsg.Lowest_temp.data[0] = 0;
//       bmsMsg.Lowest_temp.data[1] = 0;
//       bmsMsg.Lowest_temp.data[2] = 0;
//       bmsMsg.Lowest_temp.data[3] = 0;
//       bmsMsg.Voltage.data[0] = 0;
//       bmsMsg.Current.data[0] = 0;

//       // Reset the counter
//       counter = 0;
//     }
//     // Wait for 1 second
//     sleep(1);
//   }

//   return 0;
// }
